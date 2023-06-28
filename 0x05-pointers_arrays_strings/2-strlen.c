#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * Description: a function that returns the length of a string.
 * @s: Argument
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
