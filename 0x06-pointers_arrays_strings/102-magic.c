#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your code here...
 * Remember:
 * - you are not allowed to modify p
 * - you are not allowed to use a
 * - only one statement
 * - you are not allowed to code other than this
 */
	*(p + 5) = 98;
	/* .. this print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
