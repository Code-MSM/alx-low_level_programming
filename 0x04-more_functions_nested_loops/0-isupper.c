#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_isupper - a function that checks for uppercase character
 *@c: the value printed after case is detected
 *@_c: keeps the function inserted by the user
 *Return: returns either one or zero based on the case
 */
int _isupper(int c)
{	char chr;

	scanf("%c", &chr);
	if (isupper(chr))
	{	c = 1;
		printf("%d", c);
	}
	else
	{	c = 0;
		printf("%d", c);
	}
	return (c);
}
