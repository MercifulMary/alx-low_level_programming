#include "main.h"
/**
 * _puts - prints a str, followed by a new line,
 * @str: the pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
