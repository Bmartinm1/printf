#include "holberton.h"

/**
 *print_int - prints an int
 *@input: input sent to function
 *
 *Return: num of printed characters
 */

int print_int(va_list inout)
{
	int x;
	int divide = 1;
	int prnt_out = 0;

	x = va_arg(input, int);

	if (x < 0)
	{
		prnt_out += _putchar('-');
		x = -x;
	}

	while ((x / divide) > 9)
		divide *= 10;

	while (divide != 0)
	{
		prnt_out += _putchar((x / divide) + '0');
		x = x % divide;
		divide = divide / 10;
	}

	return (prnt_out);
}
