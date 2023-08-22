#include "main.h"

/**
  * _memcpy - copy the memory area
  * @dest:pointer to the return
  * @src: source memory area
  * @n: bytes from the memory area to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
