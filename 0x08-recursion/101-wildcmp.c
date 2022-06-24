#include "main.h"

int wildcmp(char *s1, char *s2);
char *postfix_match(char *str, char *postfix);
void iterate_wild(char **wildstr);
int strlen_no_wilds(char *str);

/**
 * wildcmp - compared two strings to
 * check if they are identical.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings can be considered
 * identical | otherwise, return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
	{
		return (1);
	}

	if (*s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(++s1, ++s2));
}

/**
 * postfix_match - Checks if a string mathces the postfix
 * of another string containing wildcards.
 *
 * @str: string to be evaluated
 * @postfix: postfix expression
 *
 * Return: pointer to the null byte located at the end of
 * postfix expression if 'str' and 'postfix' are identical |
 * otherwise, return pointer to first unmatched character in postfix.
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
	{
		iterate_wild(&postfix);
	}

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard character
 * until it points to a non-wildcard character.
 *
 * @wildstr: The string being iterated.
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * strlen_no_wilds - Returns the length of a string, ingoring wildcard
 * characters.
 *
 * @str: String being evaluated
 *
 * Return: length
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
		{
			len++;
		}

		index++;
		len += strlen_no_wilds(str + index);
	}

	return (len);
}
