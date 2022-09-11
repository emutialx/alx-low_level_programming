#include<stdio.h>

/**
 * main - Entry Point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i = '0';
	int j = '0';
	
	while (i <='9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j == '9' && i== '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);

