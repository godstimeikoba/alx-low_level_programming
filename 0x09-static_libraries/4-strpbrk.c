#include "main.h"
/**
* _strpbrk - search for string
* @s: source string
* @accept: serached string
* Return: the string since the first found accepted character
*/
char *_strpbrk(char *s, char *accept)
{
	int j = 0, k;

	while (s[j])
	{
		k = 0;

		while (accept[k])
		{
			if (s[j] == accept[k])
			{
				s += j;
				return (s);
			}
			k++;
		}
		j++;
	}
	return ('\0');
}
