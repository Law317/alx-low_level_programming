#include <stdio.h>

/**
 * main - main block
 * Description: write a program that finds and prints the sum of
 * the even-valued terms
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	int i = 1;
	long int first = 1, second = 2;
	long next = first + second;

	for (count = 3; count <= 50; count++)
	{
		if (next > 4000000)
			break;
		if (next % 2 == 0)
		{
			i += 1;
		}

		first = second;
		second = next;

		next = first + second;

	}
	printf("%d\n", i);
	return (0);
}
