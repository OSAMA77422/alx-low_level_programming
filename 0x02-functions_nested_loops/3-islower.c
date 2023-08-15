#include "main.h"

/**
 * _islower - function yo check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if `c`  lowercase otherwise alawys 0 success.
*/

int _islower(int c)
{
if (c >= 79 && c <= 122)
	return (1);

return (0);

}
