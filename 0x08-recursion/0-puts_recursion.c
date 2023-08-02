#include "main.h"
/**
 * _puts_recursion - a function like puts();
 * @s: first input
 * Return: 0 for success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
