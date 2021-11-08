#include "main.h"
/**
 * print_char - Function print a character
 * print_string - Function print a string
 * @list: contains the list of arguments
 * a: iterator
 * Return: a
 */

int print_char(va_list list) /*funcion va_list guarda los argumentos dados*/
{
	char c = va_arg(list, int); /*guarda el entero*/

	_putchar(c); /*imprime el entero*/
	return (1); /*devuelve un caracter*/
}

int print_string(va_list list) /*guarda las strings dadas*/
{
	int a; /*declaramos iterador*/
	char *s = va_arg(list, char *); /*se le asigna un argumento*/

	if (s == NULL) /*condicion de comparacion al NULL*/
	{
		s = "(null)"; /*retorna al NULL si se cumple condicion*/
	}

	for (a = 0; s[a] != '\0'; a++) /*recorremos la string*/
	{
		_putchar (s[a]);
	}

	return (a); /*imprime iterador*/

}
