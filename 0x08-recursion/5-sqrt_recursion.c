#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - A function thatreturns the natural square root of a number
 * @n: The number to get the sqrt for
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return(-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @n: The number to calculate the sqrrt for
 * @i: iterator
 *
 * Return: the resulting sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
