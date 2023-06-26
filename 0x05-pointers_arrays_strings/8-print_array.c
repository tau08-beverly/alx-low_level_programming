#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: arrays of integers
 * @n: numeber of elements of array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
int j;

for (j =0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
