#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, k = 0;
	unsigned int a = 0;

	while (s[k] != ' ' && s[k] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[k] == accept[j])
				a++;
			j++;
		}
		k++;
		j = 0;
	}
	return (a);
}
