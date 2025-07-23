#include "main.h"

/**
 * print_rec - Recursively prints an integers number
 * @x: the number to print
 * Return: number of charactere printed
**/
int print_rec(int x)
{
	if (x >= 10)
	{
		print_rec(x / 10);
	}

	return (_putchar((x % 10) + '0'));
}
