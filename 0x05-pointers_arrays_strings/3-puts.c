#include "main.h"
#include <stdio.h>

/**
 * _puts -  a function that prints a string, followed by a new line
 * @str: Argument
 * Return: zero
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
