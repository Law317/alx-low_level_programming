#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
