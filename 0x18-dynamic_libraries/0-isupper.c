#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if c is upper
 *
 * @c: input  character
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
