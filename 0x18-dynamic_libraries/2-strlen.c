#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * @s: Description of s variable
 *
 * Return: Always 0
 */

int  _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
