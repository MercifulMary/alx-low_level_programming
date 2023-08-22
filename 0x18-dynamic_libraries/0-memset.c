#include "main.h"

/**
 * _memset -fill the memory with constant values
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of the mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
