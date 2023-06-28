#include "main.h"

/**
 * print_rev - Write a function that prints a string, in
 * reverse, followed by a new line
 * @s: Argument
 * Return 0
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;
	for (index = len - 1; index >= 0; index--)
		_putchar(str[index]);

	_putchar('\n');
}
