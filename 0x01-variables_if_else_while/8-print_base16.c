#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;
	char d;

	c = '0';
	d = 'a';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
