#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: argument
 * Return: 1 if c a letter, lowercase or uppercase
 */

int _isalpha(int c)
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
