#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @s: analized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int k, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	k = 0;
	while (*(s + k) != '\0')
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			if (k == 0)
			{
				*(s + k) = *(s + k) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + k - 1))
					{
						*(s + k) = *(s + k) - 32;
					}
				}
			}
		}
	k++;
	}
	return (s);
}
