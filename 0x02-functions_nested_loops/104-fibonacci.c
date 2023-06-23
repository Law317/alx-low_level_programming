#include <stdio.h>

/**
 * main - main block
 * description: Write a program that finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	long int first = 1, second = 2;

	long int next = first + second;
	printf("%lu, ", first);
	printf("%lu, ", second);

	for (count = 3; count <= 98; count++)
	{
		if (count == 98)
		{
			printf("%lu", next);
		}
		else if (count < 98)
		{
			printf("%lu,", next);
			printf(" ");
		}

		first = second;
		second = next;

		next = first + second;
	}
}
