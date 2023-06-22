#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @i: argument
 * Return: lastdigit
 */

int print_last_digit(int i)
{

	i %= 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);
	return (i);
}


