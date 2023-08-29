#include <stdio.h>

/**
 * *_strstr - i
 *
 * @haystack: vfd
 * @needle: fevdf
 *
 * Return: vdf
*/

int main(void)
{
	char haystack[] = "hello world";
	char needle[] = "world";
int i, x;
int j = 0;

        for (i = 0; haystack[i] != '\0'; i++)
        {
                for (x = 0; needle[x] != '\0'; x++)
                {
			j++;
			if (haystack[i] == needle[x])
			{
				break;
			}
                        
                }
        }
        for (i = j; haystack[i] != '\0'; i++)
                {
                        putchar(haystack[i]);
                }
	putchar('\n');
return (0);
}
