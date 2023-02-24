#include "main.h"
/**
* print_alphabet - prints alphabet.
*
* Return: 0
*/
void print_alphabet(void)
{
	char I;

	I = 'a';
	while (I <= 'z')
	{
		_putchar(I);
		I++;
	}
	_putchar('\n');
}
