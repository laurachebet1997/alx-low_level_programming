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

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (num = 1; num <= 9; num++)
		{
			times = num * i;
			_putchar(44);
			_putchar(32);
			if (times <= 9)
			{
				_putchar(32);
				_putchar(times + 48);
			}
			else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
