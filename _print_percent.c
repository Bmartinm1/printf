#include "holberton.h"

/**
 * print_percent - prints "%"
 * @input: input from printf
 *
 * Return: number of printed characters
 */
int print_percent(va_list input)
{
	va_end(input);

	return (_putchar('%'));
}
