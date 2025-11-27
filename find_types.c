#include "main.h"
#include <unistd.h>
#include <stdio.h> /* Pour printf explicatif */

/**
 * find_types - Find the type of format, checking the charactere behind modulo
 * @argument_list: argument list of the variadic function
 * @charactere: the character after the %
 * Return: number of printed characters
 **/
int find_types(char charactere, va_list *argument_list)
{
    types_t check_modulo[] = {
        {"%c", print_char},
        {"%s", print_string},
        {"%%", print_modulo},
        {"%i", get_integer},
        {"%d", get_integer},
        {NULL, NULL},
    };

    int type_i;
	int result;

    printf("\n=== DÉBUT de find_types ===\n");
    printf("Caractère à traiter : '%c'\n", charactere);

    for (type_i = 0; check_modulo[type_i].mod != NULL; type_i++)
    {
        printf("Itération %d : Vérification du type \"%s\"\n", type_i, check_modulo[type_i].mod);
        printf("  Comparaison : '%c' == '%c' ? ", charactere, check_modulo[type_i].mod[1]);

        if (charactere == check_modulo[type_i].mod[1])
        {
            printf("OUI ✓\n");
            printf("→ Type trouvé : appel de la fonction correspondante\n");

			result = check_modulo[type_i].f(argument_list);
            printf("→ Fonction a retourné : %d\n", result);
            return result;
        }
        else
        {
            printf("NON ✗\n");
        }
    }

    printf("❌ Aucun type correspondant trouvé\n");
    printf("→ Affichage littéral : '%%' puis '%c'\n", charactere);
    _putchar('%');
    _putchar(charactere);

    return 2;
}
