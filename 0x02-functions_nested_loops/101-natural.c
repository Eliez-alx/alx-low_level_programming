#include <stdio.h>

/**
 * main - prints all natural numbers upto 1024
 * Description: prints the sum of all multiplies of 3 or 5 up
 * to 1024, followed by a new line.
 * Return : Always (Success)
 */
int main(void)
{
	int i = 0;
	int x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}
