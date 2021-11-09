#include "main.h"

/**
 * print_int - Print integers numbers
 * @list: Parameters
 * d: Variable
 * Return: 1 no errors
 */

int print_int(va_list list)
{
	int d = va_arg(list, int);

	print_all(d);
	return (1);
}

/**
 * print_dex - Print decimal numbers
 * @list: Parameters
 * i: Variable
 * Return: 1 no errors
 */

int print_dex(va_list list)
{
	int i = va_arg(list, int);

	print_all(i);
	return (1);
}
