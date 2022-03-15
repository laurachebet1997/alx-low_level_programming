#include "main.c"

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

	for (i = 0; i <= 10; i++)
	{
		for (num = 0; num <= 9; num++)
		{
			_putchar(num * i);
			_putchar('\n');
		}
	}
}
