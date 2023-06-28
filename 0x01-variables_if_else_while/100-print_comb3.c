#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of two digits.
 *
 * Return: Akways 0.
 */

int main(void)
{
	int c;
	int d;

	c = '0';
	while (c <= '8')
	{
		d = c + 1;
		while (d <= '9')
		{

			putchar(c);
			putchar(d);
			d++;
			putchar(',');
			putchar(' ');
			if (c == 8 && d == 9)
				continue;
		}
		c++;

	}
	putchar('\n');
	return (0);
}
