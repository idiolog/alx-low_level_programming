#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: function that reverse a string
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0 ; i = length - 1 ; i < j ; i++, j--)
	{
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

