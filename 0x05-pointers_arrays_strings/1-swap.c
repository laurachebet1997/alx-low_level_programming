#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: variable a
 *
 * @b: variable b
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	*a = b;

	*b = a;
}
