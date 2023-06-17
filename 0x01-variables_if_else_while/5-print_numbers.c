#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
