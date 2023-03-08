#include "main.h"

/**
*_mercpy - input
*@dest: input pointer string destination
*@src: input pointer to sourse string
*@n: number of bytes
*Return: pointer to destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
