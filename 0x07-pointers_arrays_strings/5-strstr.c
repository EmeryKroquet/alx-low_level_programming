#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: initial string
 * @needle: substring
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *r;
	char *x;

	while (*haystack != '\0')
	{
		r = haystack;
		x = needle;

		while (*x == *haystack && *x != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			x++;
		}
		if (*x == '\0')
			return (r);
		haystack = r + 1;
	}
	return (NULL);
}
