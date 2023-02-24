#include "main.h"
/**
* print_alphabet_x10 - print alphabet a to z ten times
*
* REturn: 0
*/
void print_alphabet_x10(void)
{
	char l;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar(10);
	}
}
