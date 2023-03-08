#include "main.h"
/**
 * _pow_recursion.c - returns the value of x raised to the power of y
 * @x: number to be multiplied
 * @y: number to multiply x
 * Return: value multiplied by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
