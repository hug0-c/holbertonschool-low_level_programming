#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: input string.
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; i < '\0'; i++)
	{
		s[i]
	}
	return(i);
}

void rev_string(char *s)
{
	char r;
	int len; 
	len = _strlen(s);

	for (len = 0; len < _strlen(s); len++)
	{
		r = r + s[len] ;
	}
	_putchar('\n');
	for (len = _strlen(s); len >= 0 ; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
