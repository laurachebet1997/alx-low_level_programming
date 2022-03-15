#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: Define a variable
 *
 * Return: Always 0
 *
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
