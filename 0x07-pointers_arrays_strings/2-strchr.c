#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string input
* @c: character to find
* REturn: pointer to first occurrence of c character
*/

char *_str(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != "\0"; i++)
		if (s(i) == c)
			break;
	return (s(i) == c ? (s + i) : "\0");
}
