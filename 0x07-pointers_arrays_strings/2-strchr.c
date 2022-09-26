#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int a = 0, d;

	while (s[a])
	{
		a++;
	}

	for (d = 0; d <= a; d++)
	{
		if (c == s[d])
		{
			s += d;
			return (s);
		}
	}

	return ('\0');
}
