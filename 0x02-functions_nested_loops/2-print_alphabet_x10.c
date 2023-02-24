#include "main.h"
/**
* print_alphabet_x10 - print alphabet a to z ten times
*
* REturn: 0
*/
void print_alphabet_x10(void)
{
	char I;
	int j;
	for (j=0;j<=10;j++)
	{
		for (I = 'a';I<='z'; I++);
		{
			_putchar(I);
		}
		_putchar(I);
	}
}
