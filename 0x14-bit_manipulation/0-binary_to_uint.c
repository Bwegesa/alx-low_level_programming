#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary no to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

	num = num * 2 + (*b - '0');
	b++;
	}
	return (num);
}