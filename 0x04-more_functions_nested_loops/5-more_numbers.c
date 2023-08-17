#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *can only use putchar three times
 *Return: alawys 0 (success)
*/

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			count = num;
			if (count > 9)
			{
				_putchar(1 + 48);
				count = num % 10;
			}
			_putchar(0 + 48);
		}
		_putchar('\n');
	}
}
