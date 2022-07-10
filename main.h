#ifndef _main_h_
#define _main_h_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
*_putchar - prints character
*@c: the character
*Return: the int of the character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
*_puts - prints string
*@s: the stirng
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++
	}
}

/**
*_strlen - finds string length
*@s: the stirng
*Return: the length of the string
*/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

int _putchar(char);
int _printf(const char *format, ...);

#endif
