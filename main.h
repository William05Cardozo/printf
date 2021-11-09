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
void print_all(int n);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
<<<<<<< HEAD
int print_dex(va_list);
int print_pc(va_list __attribute__((unused)) list);
=======
int print_dex(va_list list);
>>>>>>> 2a38d277ab4c4e9e3066de53f7ac2c52e3ed419d
int (*get_commands(const char *s))(va_list);
#endif
