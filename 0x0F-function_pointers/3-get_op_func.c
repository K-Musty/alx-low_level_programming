#include "3-calc.h"

/**
 * get_op_func - returns the op function
 * @s: String
 *
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k;

	k = 0;

	while (k < 5)
	{

		if (s && s[0] == ops[k].op[0] && !s[1])
			return (ops[k].f);
		k++;
	}

	return (NULL);
}
