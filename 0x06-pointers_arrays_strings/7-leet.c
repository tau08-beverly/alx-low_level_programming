#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int k = 0;
	int j;

	while (*(s + k) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + k) == a[j])
			{
				*(s + k) = n[j];
			}
		}
		k++;
	}
	return (s);
}
