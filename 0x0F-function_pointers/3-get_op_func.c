#include "3-calc.h"
/**
 * get_op_func - selects the correct function to
 * perform the task asked by the b user
 * @s: the operator passed as argument
 * Return: pointer to the function that
 * corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] ={
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 10)
	{
		if (s[0] ==  op->op[i])
			break;
		i++;
	}
		return (ops[i / 2].f);
 }
