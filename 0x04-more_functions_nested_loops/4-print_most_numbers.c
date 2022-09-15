#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	if (x != 50 && x != 52)
	{
		_putchar(x);
	}
	_putchar(10);
}
