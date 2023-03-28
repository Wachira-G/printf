#include "main.h"
/**
 * ord - prints an ordinary character
 * @c: the character to print
 * Return: no of characters printed (1)
*/

int ord(char c)
{
	int count = 0;

	if (c == ' ')
	{
		_putchar(' ');
		count++;
	}
	else
	{
		_putchar(c);
		count++;
	}
	return (count);
}
