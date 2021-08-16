#include "holberton.h"

/**
 * _printf - prints everything passed to it.
 * @format: args
 *
 * Return: # of characters
 */

int _printf(const char *format, ...)
{
	va_list va;
	char c;
	int i = 0;
	int prnt_out = 0;
	int opt;

	va_start(va, format);

	if (!format)
		return (-1);

	while (format[i])
		i++;

	if (!i)
		return (0)
}

