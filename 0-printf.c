#include "main.h"

/**
*_printf - prints output
*@format: the first argument
*Return: number of character printed
*/

int _printf(const char *format, ...)
{
	va_list arg;
	char *ptr;
	size_t i, len = 0;
	char *s;

	va_start(arg, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		while (*ptr != '%')
		{
			_putchar(*ptr);
			len++;
			ptr++;
		}
		ptr++;
		switch (*ptr)
		{
			case 'c':
				i = va_arg(arg, int);
				_putchar(i);
				len++;
				break;
			case 's':
				s = va_arg(arg, char *);
				_puts(s);
				len += _strlen(s);
				break;
			default:
		}
	}

	va_end(arg);
	return (len);
}
