#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * @c: numbers to be printed
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (!(c == 50) && !(c ==52))
		{
			_putchar(c);
		}
		else
		{
			;
		}
	}
	_putchar('\n');
}
