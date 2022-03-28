#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 *
 * @c: the character
 *
 * Return:  returns a ptr to the 1st occurrence of
 *
 * the char c in str s, else, return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
