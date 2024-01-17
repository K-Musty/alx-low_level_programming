#include "main.h"
/**
 * _strstr - This function will locate a substring.
 * @haystack: This will be the first value char.
 * @needle: And the second value  char.
 *
 * Return: The char will be stored in result
 */
char *_strstr(char *haystack, char *needle)
{
	int up = 0, a = 0, k, dle = 0, l, stk = 0;
	char *p;

	while (needle[up] != '\0')
	{
		up++;
	}
	while (haystack[stk] != '\0')
	{
		stk++;
	}
	if (up == 0)
		return (haystack);
	while (haystack[dle] != '\0')
	{
		if (haystack[dle] == needle[0])
		{
			p = &haystack[dle];
			l = dle;
			a = 0;
			for (k = 0; k < up; k++)
			{
				if (haystack[l] == needle[k])
					a++;
				l++;
			}
		}
		if (a == up)
			return (p);
		dle++;
	}
	return ('\0');
}
