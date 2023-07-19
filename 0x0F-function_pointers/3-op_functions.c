#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two integers
 *@num1:number 1
 *@num2:number 2
 *
 * Return: an integer
 */
int op_add(int number1, int number2)
{
	return (number1 + number2);
}

/**
* op_sub - difference between integers
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_sub(int number1, int number2)
{
	return (number1 - number2);
}

/**
* op_mul - multiplication between integers
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_mul(int number1, int number2)
{
	return (number1 * number2);
}
/**
* op_div - division  between integers
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_div(int number1, int number2)
{
	if (number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (number1 / number2);
}

/**
* op_mod - the remainder between integers
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_mod(int number1, int number2)
{
	if (number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (number1 % number2);
}
