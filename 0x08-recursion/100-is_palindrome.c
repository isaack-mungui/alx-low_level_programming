#include "main.h"
#include <stdio.h>

int is_palindrome(char *s);
int check_palindrome(char *s, int len, int index);
int find_strlen(char *s);

/**
 * is_palindrome - checks whether a
 * string is a palindrome or not.
 *
 * @s: string to be evaluated
 *
 * Return: 1 is string is a palindrome |
 * 0 otherwise.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}

	return (check_palindrome(s, len, index));
}

/**
 * check_palindrome - checks is a string is a
 * palindrome.
 *
 * @s: string to be evaluated.
 * @len: length of string 's'.
 * @index: index of string 's'.
 *
 * Return: 1 if the string is a plaindrome |
 * otherwise, return 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}

	if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}

	return (0);
}

/**
 * find_strlen - Returns the length of a string.
 * @s: String to be evaluated.
 *
 * Return: The length of the string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
