#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int small, capital;

	small = 97;
	capital = 65;

	while (small < 123)
	{
		putchar(small);
		small++;
	}

	while (capital < 91)
	{
		putchar(capital);
		capital++;
	}

	putchar(10);

	return (0);
}
