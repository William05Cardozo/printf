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
<<<<<<< HEAD
		{"%", print_pc},
=======
		{"i", print_dex},
		{"d", print_int},
>>>>>>> 2a38d277ab4c4e9e3066de53f7ac2c52e3ed419d
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
