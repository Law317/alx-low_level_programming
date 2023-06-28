#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an aray a number of times
 * @a: argument
 * @n: arggument
 * Description: a function that prints n elements of an array of integers,
 * followed by a new line
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}
