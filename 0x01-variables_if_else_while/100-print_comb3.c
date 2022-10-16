#include <stdio.h>

/**
 * main - print double digit comination
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, m;

	i = 48;
	m = 48;

	while (i < 58)
	{
		m = i + 1;
		while (m < 58)
		{
			putchar(i);
			putchar(m);

			if (i < 56 || m < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
