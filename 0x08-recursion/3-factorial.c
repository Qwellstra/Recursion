#include "main.h"
/**
 * factorial - A function that returns the factorial of a number
 * @n: the number to return its fatorial form
 *
 * Return: factorial of n
 */
int fatorial(int n)
{
	if (n < 0)
		return(-1);
	if (n == 0)
		return (1);
	return (n * fatorial(n - 1));
}
