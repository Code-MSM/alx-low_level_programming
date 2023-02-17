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
	char Alpha;

	for (Alpha = 'z'; Alpha	>= 'a'; Alpha--)
	{
		putchar(Alpha);
		
	}
	putchar('\n');

	return (0);
}
