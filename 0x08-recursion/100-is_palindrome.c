#include "main.h"

/**
 * _len - check length of string
 * @s: string
 * Return: the length of a string
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}
/**
 * check - check if string is palindrome
 * @j: index
 * @l: length of string
 * @s: string
 * Return: 1 if polindrome 0 if not
 */
int check(int j, int l, char *s)
{
	if (l > 0)
	{
		if (s[j] == s[l])
		{
			return (check(j + 1, l - 1, s));
		}
		else if (s[j] != s[l])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - detect if a string is palindrome
 * @s: string
 * Return: 1 if string is palindrome 0 if not
 */
int is_palindrome(char *s)
{
	return (check(0, _len(s) - 1, s));
}

