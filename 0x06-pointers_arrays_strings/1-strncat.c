#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthi, lengthj;

	lengthi = 0;
	lengthj = 0;

	while (*(dest + lengthi) != '\0')
		lengthi++;

	while (*(src + lengthj) != '\0' && lengthi < 97 && lengthj < n)
	{
		*(dest + lengthi) = *(src + lengthj);
		lengthi++;
		lengthj++;
	}
	*(dest + lengthi) = '\0';
	return (dest);
}
