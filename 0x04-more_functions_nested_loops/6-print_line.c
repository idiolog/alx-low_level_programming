#include "main.h"

/**
 * print_line -a function that draws a straight line in the terminal
 * @n: function for int n
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i < n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
