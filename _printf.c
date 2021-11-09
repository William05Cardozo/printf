#include "main.h"

/**
 * _printf - prints parameters
 * @format: writing format
 * i: iterator
 * k: iterator 2
 * Return: k
 */

int _printf(const char *format, ...)
{
	int i, k = 0;
	va_list list;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			continue;
		}
		if (format[i + 1] == '\0')
		{
			return (-1);
		}
		f = get_commands(format + i + 1);
		if (f != NULL)
		{
			k = k + f(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			k++;
		}
	}
	va_end(list);
	return (i);
}
