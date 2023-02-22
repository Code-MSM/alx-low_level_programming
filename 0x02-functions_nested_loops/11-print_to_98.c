#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Prints number up to the inserted value
 *@n:number to be scaned
 *@num: number to start off thecount down
 *return: the function returns nothing 
 */
void print_to_98(int n)
{
	int num;
	scanf("%d", &n);
	for (num = 0; num <= n; num++)
	{
		 printf("%d \t", num);
		 printf('\n');
	}
	return ;
}

