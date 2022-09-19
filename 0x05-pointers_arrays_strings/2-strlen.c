#include "main.h"
/**
 * _strlen -length of string
 *@s: - string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')

	{	s++;
		len++;
	}
	return (len);
}
