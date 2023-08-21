#include "main.h"
int main(void)
{
int a[5]={1, 2, 3, 4, 5};
int *ptr = &a[0];
int c;
for (c = 0; *a != '\0'; ++a)
	printf("%d\n", *a);
	c++;
	return 0;
}
