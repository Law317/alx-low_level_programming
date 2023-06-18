#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations of two
 * two-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;
	int e;

	for (c = 0; c <= 98; c++)
	{
		for (e = c + 1; e <= 99; e++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');
			if (c == 98 && e == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
