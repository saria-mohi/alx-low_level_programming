#include "main.h"
/**
 * palindrome - function check end of string
 * @str: is String
 * @st: start of String
 * @end: end of String
 * Return: String is palindrome or not
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	if (str[st] != str[end])
		return (0);
	if (st <= end || st < end + 1)
		return (palindrome(str, st + 1, end - 1));
	return (1);
}
/**
 * strLen - function to find length of String
 * @s: is the String
 * Return: length of String
 */
int strLen(char *s)
{
	if (*s != '\0')
		return (1 + strLen(s + 1));
	return (0);
}
/**
 * is_palindrome - function to call other functions
 * @s: is String wanna to check
 * Return: 1 if String is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = strLen(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}
