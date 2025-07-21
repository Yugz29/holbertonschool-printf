#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * types - Create a strcuture for the types that we want to print
 * @mod: The future modulo for the argument of printf function
 * @print_func: Pointer function wich prints according to the type.
**/
typedef struct types {
	char *mod;
	int (*f)(va_list *argument_list);
} types_t;

int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(va_list *argument_list);
int print_string(va_list *argument_list);
int print_modulo(va_list *argument_list);
int _putchar(char c);
int _strlen(char *s);

#endif
