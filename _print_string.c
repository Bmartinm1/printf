#include "holberton.h"

/**
 * print_string - prints string
 * @input: input from printf
 *
 * Return: number of printed characters
 */

int print_string(va_list input)
{

	char *str;
	int i;
	int len = 0;

	str = va_arg(input, char*);

	if (!str)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		len += _putchar(str[i]);
	}

	va_end(input);

	return (len);
}
