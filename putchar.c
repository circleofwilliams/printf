#include "main.h"

/**
*_putchar - prints one character
*@c: the character to print
*Return: print to output
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
