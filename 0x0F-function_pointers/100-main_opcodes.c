#include "fucnction_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - vf
 * @argc: vfe
 * @argv: vfd
 * Return: always 0
*/

int main(int argc, char **argv)
{
char *p = (char *)main;
int b;

if (argv != 2)
{
printf("Error\n"), exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n"), exit(2);
}
while (b--)
{
printf("%02hhx%s", *p++, b ? " " : "\n");
}
return (0);
}
