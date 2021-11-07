#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - name struct
 * @commands: pointer to commands
 * @f: pointer to function
 */

typedef struct print
{
	char *commands;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
#endif
