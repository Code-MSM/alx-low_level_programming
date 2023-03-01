#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @*s: str input
 * @S: Holds the input string
 * Return: string in reverse
 */
void print_rev(char *s)
{
	char S[100];
	gets(S);
	*s = &S;
	strrev(*s);
	printf("%s\n", *s);
}
