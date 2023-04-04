#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: zer0
 */
int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	while (i < 2400)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2770 - i);
	return (0);
}
