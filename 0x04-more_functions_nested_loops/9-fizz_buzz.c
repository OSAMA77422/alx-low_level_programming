#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 alawys (success)
*/

int main(void)
{
int x;

for (x = 1; x <= 100; x++)
	{
	if (x % 3 == 0 && !(x % 5 == 0))
		printf("Fizz");
	else if (x % 5 == 0 && !(x % 3 == 0))
		printf("Buzz");
	else if (x % 3 == 0 && x % 5 == 0)
		printf("FizzBuzz");
	else
		printf("%d", x)

	if (x != 100)
		printf(' ');
	else
		printf('\n');
	}
	return (0);
}
