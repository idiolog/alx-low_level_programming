#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: function parameter
 * Return: 0
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	return (length);
}
