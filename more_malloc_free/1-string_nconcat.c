#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	else
	{
		j = n;
	}
	ptr = malloc(sizeof(char) * (i + j) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}
	for (y = 0; y < j; y++, x++)
	{
		ptr[x] = s2[y];
	}
	ptr[x] = '\0';
	return (ptr);
}
