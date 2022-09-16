#include <stdio.h>
#include "main.h"
/**
 * print_line - function that draws a striaght line
 * @n: is the number of times the line should be printed
 * Return: no returns
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		putchar('_');
		putchar('\n');
	}
}
