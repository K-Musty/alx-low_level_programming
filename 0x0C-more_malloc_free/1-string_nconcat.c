#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the length of a string.
 * @strr: The string
 *
 * Return: string length
 */
int _strlen(char *strr)
{
	int f;

	for (f = 0; strr[f] != '\0'; f++);
	return (f);
}
/**
 * string_nconcat - concates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Return: null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *ptr;
        int num, length, i, j;

        num = n;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
        if (num < 0)
                return (NULL);
        if (num >= _strlen(s2))
        {
                num = _strlen(s2);
        }
        length = _strlen(s1) + num + 1;

        ptr = malloc(sizeof(*ptr) * length);
        if (ptr == NULL)
                return (NULL);
        i = 0;
        while (s1[i] != '\0')
        {
                ptr[i] = s1[i];
                i++;
        }
        for (j = 0; j < num; j++)
        ptr[i + j] = s2[j];
        ptr[i + j] = '\0';

        return (ptr);
}
