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

	for (row = 0; row <= size; row++)
	{
	for (co = 0; co <= size; co++)
		_putchar('#');
	_putchar('\n');
	}
}
