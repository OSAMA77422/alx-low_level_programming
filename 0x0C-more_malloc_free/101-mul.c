#include "main.h"

/**
 * _puts - vdf
 * @str: fv
 * Return: fv
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
}

/**
 * _atoi - vfd
 * @s: vfd
 * Return: vf
*/

int _atoi(const char *s)
{
int sign = 1;
unsigned long int r = 0, f, i;

for (f = 0; !(s[f] >= 48 && s[f] <= 57); f++)
{
	if (s[f] == '-')
	{
	sign *= -1;
	}
}
for (i = f; s[i] >= 48 && s[i] <= 57; i++)
{
r *= 10;
r += (s[i] - 48);
}
return (sign * r);
}

/**
 * print_int - fdbdf
 * @n: fv
 * Return: v
*/

void print_int(unsigned long int n)
{
unsigned long int d = 1, i, r;

for (i = 0; n / d > 9; i++, d *= 10)
{
;
}
for (; d >= 1; n %= d, d /= 10)
{
r = n / d;
_putchar('0' + r);
}
}

/**
 * main - vf
 * @argc: vfd
 * @argv: vfdv
 * Return: csdfv
*/

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
_puts("Error ");
exit(98);
}
print_int(_atoi(argv[i] * _atoi(argv[2]));
_putchar('\n');

return (0);
}
