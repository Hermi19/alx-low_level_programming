#include "main.h"

/**
 * strcat - concatenates two strings
 * @dest: pointer to the string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src);
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
