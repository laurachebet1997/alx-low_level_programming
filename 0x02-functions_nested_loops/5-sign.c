#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: Declaring a variable
 *
 * Return: Always 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if(n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar(0);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
