#include "main.h"

 /**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  * Return: the string since the first found accepted character
  */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, d;

	while (s[a])
	{
		d = 0;

		while (accept[d])
		{
			if (s[a] == accept[d])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
