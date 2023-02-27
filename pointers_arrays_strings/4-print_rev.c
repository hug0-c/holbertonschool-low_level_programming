#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; (s[x]) != '\0'; x++)
	{
	}
	for (x = x; x != 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

