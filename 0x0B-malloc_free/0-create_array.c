#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/**
 * create_array - create array
 *
 * @size: size
 *
 * @c: constant
 *
 * Return: char pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc((size) * sizeof(char));
	if (size == '\0')
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
