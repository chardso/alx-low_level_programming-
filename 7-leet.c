#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: Always 0
 */
char *leet(char *s)
{
	int i, j;
	char lowerLetter[] = "aeotl";
	char upperLetter[] = "AEOTL";
	char numbers[] = "43071";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; lowerLetter[j] != 0; j++)
		{
			if (s[i] == lowerLetter[j] || s[i] == upperLetter[j])
			{
				s[i] = numbers[j];
			}
		}
	}

	return (s);
}
