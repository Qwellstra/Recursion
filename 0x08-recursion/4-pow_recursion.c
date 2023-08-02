#include"main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The value to raise
 * Y: The power to raise x
 *
 * Return: the results from the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return(-1);
	if (y == 0)
		return (1);
	return(x * _pow_recursion)x, y - 1));
}
