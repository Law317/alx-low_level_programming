#include "main.h"
/**
 * _islower - Write a function that checks for alphabetic character.
 * @c: argument
 * Return: 1 if c a letter, lowercase or uppercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
