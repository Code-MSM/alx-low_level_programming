#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;
	char Alpha;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (Alpha = 'a'; Alpha <= 'f'; Alpha++)
		putchar(Alpha);
	putchar('\n');

	return (0);
}
