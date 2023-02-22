#include "main.h"
#include <stdio.h>
/**
 *int add - a function that adds two integers and returns the result.
 *@num1: inserted number
 *@num2: inserted 2nd number
 *Return: Sum of num1 and num2
 */
int add(int num1, int num2)
{	int sum;
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d + %d = %d", num1, num2, sum);
}
