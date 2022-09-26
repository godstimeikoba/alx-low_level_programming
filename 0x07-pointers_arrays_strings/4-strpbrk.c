#include "main.h"

 /**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  * Return: the string since the first found accepted character
  */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, e;

	while (s[a])
	{
		e = 0;

		while (accept[e])
		{
			if (s[a] == accept[e])
			{
				s += a;
				return (s);
			}
			e++;
		}
		a++;
	}
	return ('\0');
}
