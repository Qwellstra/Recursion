#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error, return -1,and set an approrpriate errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
