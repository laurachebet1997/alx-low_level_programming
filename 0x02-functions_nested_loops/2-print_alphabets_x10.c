#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int times;
	for (times = 0; times <= 10; times++)
	{
		for (i = 97; i < 123; i+++)
		{
			_putchar(i);
		}
		_putchar(times);
		_putchar('\n');
	}
}
