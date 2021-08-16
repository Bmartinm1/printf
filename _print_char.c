#include "holberton.h"

/**
* print_char - prints a character
*
* @data: va_list input
*
* Return: amount of characters printed
*/

int print_char(va_list input)
{
	int i;

	i = va_arg(input, int);

	_putchar(i);
	return (1);

}
