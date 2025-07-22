#include "main.h"
#include <unistd.h>

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
