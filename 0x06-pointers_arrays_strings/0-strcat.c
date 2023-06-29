#include "main.h"
/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int lengthi, lengthj;

lengthi = 0;
lengthj = 0;

while (*(dest + lengthi) != '\0')
lengthi++;

while (*(src + lengthj) != '\0' && lengthi < 97)
{
*(dest + lengthi) = *(src + lengthj);
lengthi++;
lengthj++;
}
*(dest + lengthi) = '\0';
return (dest);
}	
