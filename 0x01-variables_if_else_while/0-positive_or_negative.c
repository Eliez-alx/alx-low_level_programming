#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print whether the number stored in variable is positive or negative.
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	stand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	retun: (0);
}
