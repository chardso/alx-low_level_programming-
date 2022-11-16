#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - Changes all lowercase letters of a string
 * to uppercase
 * @s: string
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i;

	/* count char by char until NULL, then subtract 32 from the array*/
	/* because 'A' is 32 ASCII characters from 'a'*/
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
