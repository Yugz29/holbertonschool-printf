#include "main.h"
#include <unistd.h>


/**
 * print_char - Print a charactere
 * @argument_list: argument liste, on the variadic function
 * Return: void
**/
int print_char(va_list *argument_list)
{
	char c;

	c = va_arg(*argument_list, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Print a string
 * @argument_list: argument liste, on the variadic function
 * Return: void
**/
int print_string(va_list *argument_list)
{
	int i;
	char *s;

	s = va_arg(*argument_list, char *);

	if (s == NULL)
	{
		return (-1);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_modulo - Print the modulo
 * @argument_list: argument liste, on the variadic function
 * Return: void
**/
int print_modulo(va_list *argument_list)
{
	(void)argument_list;
	_putchar('%');
	return (1);
}

/**
 * find_types - Find the type of format, checking at the
		charactere behind modulo
 * @argument_list: argument liste, on the variadic function
 * Return: always 0.
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
			check_modulo[type_i].f(argument_list);
		}
	}
	return (0);
}
