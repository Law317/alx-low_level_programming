#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;

	c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
