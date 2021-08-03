#include <stdio.h>
#include "holberton.h"

/**
 * main - test for NULL string
 *
 * Return: Always 0
 */
int main(void)
{
	printf(NULL); /* Expected result: Compiler warning */
	_printf(NULL);

	printf("Test: %s\n", NULL); /* Expected result: Test: (null) */
	_printf("Test: %s\n", NULL);

	printf("%s\n", NULL);  /* Expected result: Segmentation fault */
	_printf("%s\n", NULL);
	return (0);
}
