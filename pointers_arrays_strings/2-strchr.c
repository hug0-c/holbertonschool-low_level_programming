#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: char string
 * @c: char variable
 * Return: pointer to resulting string `s`
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s + 1 == c)
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}
