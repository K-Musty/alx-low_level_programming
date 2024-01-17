#include "main.h"

/**
 * _atoi - This will converts a string to an integer
 * @s: This is the string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int v, d, n, lenx, f, digitx;

	v = 0;
	d = 0;
	n = 0;
	lenx = 0;
	f = 0;
	digitx = 0;

	while (s[lenx] != '\0')
		lenx++;

	while (v < lenx && f == 0)
	{
		if (s[v] == '-')
			++d;

		if (s[v] >= '0' && s[v] <= '9')
		{
			digitx = s[v] - '0';
			if (d % 2)
				digitx = -digitx;
			n = n * 10 + digitx;
			f = 1;
			if (s[v + 1] < '0' || s[v + 1] > '9')
				break;
			f = 0;
		}
		v++;
	}

	if (f == 0)
		return (0);
	return (n);
}
