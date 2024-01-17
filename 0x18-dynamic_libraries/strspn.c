#include "main.h"
/**
 * _strspn - This function will get the length of a prefix substring
 * @s: This is the first value char
 * @accept: This will be second value - char
 *
 * Return: char with result yess
 */
unsigned int _strspn(char *s, char *accept)
{
	int fix = 0, pre = 0;
	unsigned int a = 0;

	while (s[pre] != ' ' && s[pre] != '\0')
	{
		while (accept[fix] != '\0')
		{
			if (s[pre] == accept[fix])
				a++;
			fix++;
		}
		pre++;
		fix = 0;
	}
	return (a);
}
