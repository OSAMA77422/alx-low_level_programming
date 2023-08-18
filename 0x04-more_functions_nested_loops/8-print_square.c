#include "main.h"

/**
 * print_square - print a square using the character.
 *
 * @size: is the size of square.
 *
 * Return: alawys 0 (success)
*/

void print_square(int size)
{
	int row, co;

	if (size >= 0)
	{
	_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
	for (co = 1; co <= size; co++)
		_putchar('#');
	_putchar('\n');
	}
}
