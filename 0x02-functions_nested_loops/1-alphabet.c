#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "main.h"
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{

	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
