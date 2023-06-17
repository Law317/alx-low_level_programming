#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line, exclude e and q
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char x;
	char y;

	c = 'a';
	x = 'e';
	y = 'q';

	while (c <= 'z')
	{
		if (c != x && c != y)
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
