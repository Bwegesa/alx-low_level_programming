#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;
	/* find the length of dest */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* concatenate src to dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	/* add null terminator to the end of dest */
	dest[dest_len + i] = '\0';
	return 0;
}
