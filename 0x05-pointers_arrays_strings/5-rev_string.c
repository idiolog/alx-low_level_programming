#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: function that reverse a string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	for (i = 0 ; i < length / 2 ; i++)
	{
		char j;

		j = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = j;
	}
}

