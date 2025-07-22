#include "main.h"
#include <unistd.h>

/**
 * find_types - Find the type of format, checking the charactere behind modulo
 * @argument_list: argument liste, on the variadic function
 * @charactere: the charactere after the %
 * Return: 2 for % and the next charactere
 **/

int find_types(char charactere, va_list *argument_list)
{
	types_t check_modulo[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_modulo},
		{NULL, NULL},
	};

	int type_i;

	for (type_i = 0; check_modulo[type_i].mod != NULL; type_i++)
	{
		if (charactere == check_modulo[type_i].mod[1])
		{
			return (check_modulo[type_i].f(argument_list));
		}
	}
	_putchar('%');
	_putchar(charactere);
	return (2);
}
