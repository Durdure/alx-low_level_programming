#include <stdio.h>
/**
 * _putchar - writes the character C to stdout
 * &C: The character to print
 * Return: On success
 * on error, -1 is returned, and error is 
 */
int _putchar(char,C)
{
	return (write(1, &C, 1));
}
