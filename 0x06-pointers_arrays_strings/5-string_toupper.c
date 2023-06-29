#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	int k = 0;

	while (*(s + k) != '\0')
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			*(s + k) = *(s + k) - 32;
		}
		k++;
	}
	return (s);
}
