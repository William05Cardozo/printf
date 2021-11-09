#include "main.h"
/**
 * get_commands - entry point
 * i: variable
 * @s: pointer
 * Return: NULL
 */
int (*get_commands(const char *s))(va_list)
{
	print_f print[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pc},
		{NULL, NULL},
	};

	int i;

	for (i = 0; print[i].commands != NULL; i++)
	{
		if (*s == *print[i].commands)
		{
			return (print[i].f);
		}
	}
	return (NULL);
}
