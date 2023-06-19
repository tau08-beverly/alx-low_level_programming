#include <stdio.h>
/**
 * main - Prints all possible cominations of single digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int j = '0';

	while (j <= '9')
	{

		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++j;
	}
	putchar('\n');
	return (0);

}	
