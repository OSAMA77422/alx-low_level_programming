#include "main.h"

/**
 * print_diagonal - print a digonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
 * Return: void
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 0; postn < n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar('\\'); /*is equal to '/' char*/
			_putchar('\n');
		}
	}


}
