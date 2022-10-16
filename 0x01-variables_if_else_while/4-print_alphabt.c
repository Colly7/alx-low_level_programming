#include <stdio.h>

/**
 * main - print the alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int small = 97;

	while (small < 123)
	{
		if (small != 101 && small != 113)
		{
			putchar(small);
		}
		small++;
	}
	putchar(10);

	return (0);
}
