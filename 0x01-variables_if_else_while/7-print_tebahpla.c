#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always retuns 0
 */
int main(void)
{
	int c;

	for (c = 'z'; 'a' <= c; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
