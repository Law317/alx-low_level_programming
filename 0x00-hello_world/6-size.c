#include <stdio.h>
/**
 * main - print the size of various type on the computer
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("size of a char:%2ld byte(s) \n", sizeof(char));
	printf("Size of an int: %2ld byte(s) \n", sizeof(int));
	printf("Size of a long int: %2ld byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %2ld byte(s) \n", sizeof(long long int));
	printf("Size of a float: %2ld byte(s) \n", sizeof(float));

	return (0);
}
