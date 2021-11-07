#include "main.h"
/**
 *
 */
int print_char(va_list list)//funcion va_list guarda los argumentos dados//
{
	char c = va_arg(list, int);//guarda el entero//

	_putchar(c);//imprime el entero//
	return (1);//devuelve un caracter//
}
int print_string(va_list list)//guarda las strings dadas//
{
	int a;//declaramos iterador//
	char *s = va_arg(list, char *);//se le asigna un argumento//

	for (a = 0; s[a] != '\0'; a++);//recorremos la string//
	
	if (s == NULL)//condicion de comparacion al NULL//
	{
		return (NULL);//retorna al NULL si se cumple condicion//
	}
	return (a);//imprime iterador//
}
