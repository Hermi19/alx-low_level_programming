#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
