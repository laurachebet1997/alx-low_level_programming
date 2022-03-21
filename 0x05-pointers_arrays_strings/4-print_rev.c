#include "main.h"
#include <stdio.h>

/**
 *print_rev - entry point
 *
 *@s: variable
 *
 *Return: not
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{

	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
