#include "main.h"

/**
 * print_triangle - prints
 *
 * @size: size of the triangle
 *
 * Return: alawys 0 (success)
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');

	else
	{
	for (h = 0; h <= size; h++)
	{
		for (b = 1; b <= size; b++)
	{
			if ((h + b) <= size)
				_putchar(' ');
			else
				_putchar('#');

		}
		putchar('\n');
	}
	}
}
