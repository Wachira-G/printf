#include <stdarg.h>
#include "main.h"

/**
 * _printf - a function that prints output
 * @format: is the first argument
 * Return: returns output
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0, k = 0;
	va_list args;
	char *s;

	va_start(args, format);
	while (format[k] != '\0')
	{
		if (format[k] == '%')
		{
			k++;
			switch (format[k])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					k++;
					break;
				case's':
					s = va_arg(args, char *);
					while (s[i] != '\0')
					{
						_putchar(s[i]);
						count++;
						i++;
					}
					k++;
					break;
				case '%':
					_putchar('%');
					count++;
					k++;
					break;
				case 'd':
				case 'i':
					i = va_arg(args, int);
					if (i < 0)
					{
						_putchar('-');
						count++;
						i = -1;
					}
					count += nums(i);
					k++;
					break;
				default:
					break;
			}
		}
		else
		{
		count += ord(format[k]);
		k++;
		}

	}
	va_end(args);
	return (count);
}
