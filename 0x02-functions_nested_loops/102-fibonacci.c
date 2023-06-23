#include <stdio.h>

/**
 * main - main block
 * Description: a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	for (count = 3; count <= 50; count++)
	{
		if (count == 50)
		{
			printf("%lu", next);
		}
		else
		{
			printf("%lu, ", next);
		}

		first = second;
		second = next;

		next = first + second;
	}
	return (0);
}
