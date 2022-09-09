#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* main -prints a text
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{ 	printf("%d is negative", n);

	}
	return (0);
}
