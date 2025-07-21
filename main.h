#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct types {
	char *mod;
	void (*print_func(va_list *);
} types_t

int _strlen(char *s);
int _printf(const char *format, ...);

#endif
