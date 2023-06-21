#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 * @n: argument
 * Return: 1 and prints + if n is greater than zero
 */

int print_sign(int n)
{
	int l, z;

	l = n * 1;
	z = n * -1;
	if (n > 0 && n == l)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0 && n == z)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
