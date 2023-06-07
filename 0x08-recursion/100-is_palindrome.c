#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string recursively
 * @s: the string to be counted
 * Return: length of a string
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * pal_checker - checks for palindrome
 * @str: the string to be checked
 * @len: length of string checked
 * @count: counter for recursions
 * Return: 1 if string is a palindrome, 0 if not
 */
int pal_checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (pal_checker(str, (len - 1), (count + 1)));
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to be checked
 * Return: 1 if string is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	int count = 0;

	return (pal_checker(s, (length - 1), count));
}
