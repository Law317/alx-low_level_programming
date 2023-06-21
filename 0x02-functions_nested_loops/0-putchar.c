#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints _putchar, followed by a new line
 * Return - Alway 0
 */

int main(void)
{
	char *print = "_putchar\n";



	while (*print)
	{
		putchar(*print);
		print++;
	}
	return (0);
}
