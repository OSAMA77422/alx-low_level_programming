#include <stdio>

/**
 * main - entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit);
		if (digit != 9)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);

}
