#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
