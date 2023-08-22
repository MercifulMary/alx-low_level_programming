#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination.
 * @src: the source.
 * @n: amount of the bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
