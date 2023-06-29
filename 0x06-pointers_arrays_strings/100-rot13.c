#include "main.h"
/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int k = 0;
	int j;

	while (*(s + k) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + k) == a[j])
			{
				*(s + k) = rot[j];
				break;
			}
		}
		k++;
	}
	return (s);
}
