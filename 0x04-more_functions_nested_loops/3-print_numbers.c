#include "main.h"

/**
 * main - Entry point
 * print_numbers - print 0 - 9
 * only using putchar twice
 *
 * Return: alaways 0 (success)
*/

int main(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
			num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');

	return (0);
}
