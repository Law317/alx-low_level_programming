#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program will assign a random number to the variable
 * each time it is executed. Complete the
 * @n: num
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{

		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
