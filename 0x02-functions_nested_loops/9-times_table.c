#include "main.h"

/**
 * times_table - Entry point
 *
 * @n: Defining a variable
 *
 * Return: Always 0
 *
 */

void times_table(void)
{
	int i;
	int num;
	int times;

	for (i = 0; i <= 10; i++)
	{
		for (num = 0; num <= 9; num++)
		{
			times = num * i;
			_putchar(44);
			_putchar('\n');
		}
	}
}
