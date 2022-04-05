#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry  point
 *
 * @str: Variable
 *
 * Return: Always 0
 *
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
