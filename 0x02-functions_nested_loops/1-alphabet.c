#include "main.h"
/**
 * print_alphabet - print lowercase letters
 *
 * Return: always zero
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
