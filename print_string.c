#include "main.h"
#include <unistd.h>

/**
 * print_string - Print a string
 * @argument_list: argument liste, on the variadic function
 * Return: void
**/
int print_string(va_list *argument_list)
{
	int i = 0;
	char *s;

	s = va_arg(*argument_list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
