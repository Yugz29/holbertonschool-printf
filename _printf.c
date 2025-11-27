#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Print a string or a character
 * @format: the argument to print
 * Return: the number of characters printed.
 **/
int _printf(const char *format, ...)
{
    va_list argument_list;
    int format_i, count;
	int result;

    format_i = 0;
    count = 0;

    if (format == NULL)
        return (-1);

    va_start(argument_list, format);

    printf("\n=== Début _printf ===\n");
    while (format[format_i] != '\0')
    {
        printf("Lecture du caractère format[%d] = '%c'\n", format_i, format[format_i]);

        if (format[format_i] != '%')
        {
            printf("  → Caractère normal : affichage direct avec _putchar('%c')\n", format[format_i]);
            _putchar(format[format_i]);
            count++;
            format_i++;
        }
        else
        {
            printf("  → Caractère %% trouvé, on cherche le type suivant\n");
            format_i++;

            if (format[format_i] == '\0')
            {
                printf("  → Fin de chaîne après %%, retour -1\n");
                va_end(argument_list);
                return (-1);
            }

            printf("  → Appel find_types pour '%c'\n", format[format_i]);
            result = find_types(format[format_i], &argument_list);
            printf("  → find_types a retourné : %d\n", result);
            count += result;
            format_i++;
        }
    }

    va_end(argument_list);
    printf("=== Fin _printf : total caractères imprimés = %d ===\n", count);
    return count;
}
