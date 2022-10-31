#include "main.h"
#include <unistd.h>

/**
 * _putchar -writes the characters c to stdout
 * @c: The characters to print
 *
 * Return: on success 1.
 * o
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
