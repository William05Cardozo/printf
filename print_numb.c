#include "main.h"

int print_int(va_list list)
{
	int d = va_arg(list, int);

	print_all(d);
	return (1);
}

int print_dex(va_list list)
{
	int i = va_arg(list, int);
	
	print_all(i);
	return (1);
}
