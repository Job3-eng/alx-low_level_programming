#include <stdio.h>
#include "3-calc.h"
/**
* get_op_func - selects the correct function to execute
* @s: passed as argument
* Return: 0 succesful
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

	int a;

	a = 0;
	while (ops[a].op)
	{
		if (*(ops[a].op) == *s)
		{
			return (ops[].f);
		}
	    a++;
	}

	return (0);

}
