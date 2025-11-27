# _printf

## 📌 Project description

`_printf` is a partial reimplementation of the standard `printf` function in the C language.  
This project is part of the Holberton School program, with the aim of learning:

- Handling variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
- Creating a format handling system (`%c`, `%s`, `%d`, etc.)
- Writing modular, rigorous code that complies with the **Betty** style
- Managing data types manually, without calling libc

The goal is to obtain a clone of `printf` that works on basic formats.

## ⚙️ Compilation

The project is compiled with this command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

or use 👇🏼 to have explanations :

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format main.c _printf.c find_types.c print_char.c get_integer.c print_string.c print_modulo.c _putchar.c -o my_printf
./my_printf
```

**All `.c` files must be in the same folder as `main.h.`**

## ✅ Requirements

### Environment

- OS : Ubuntu 20.04 LTS
- Norme ISO : `C89`

### Constraints

- No global variables
- No more than 5 functions per `.c` file
- No standard C library functions allowed (except `malloc`, `free`, `write`)
- Mandatory use of `va_list` to manage variable arguments
- Respect of Betty's style

## Features

| Specifer |Description |
| :--------------- |:---------------:|
| %c  | Displays a character|
| %s  | Displays a string of characters|
| %%  | Displays a `%`|
| %d  | Displays a signed integer|
| %i  | Displays a signed integer|

## 💻 Examples of use

```c
_printf("Hello %s!\n", "Holberton");
> Hello Holberton!

_printf("Char: %c\n", 'H');
> Char: H

_printf("Number: %d and %i\n", 98, -98);
> Number: 98 and -98

_printf("Display percent: %%\n");
> Display percent: %
```

## 🤔 How does that works ?

```
Chaîne format :  A   % c   B   % d

Boucle principale (_printf) : lecture lettre par lettre
-------------------------------------------------------
i=0 -> 'A'  -> _putchar('A')
i=1 -> ' '  -> _putchar(' ')
i=2 -> '%'  -> appel find_types avec charactere='c'
    Boucle find_types (vérifie types connus) :
        type 0 -> '%c' -> correspond ! -> appel print_char()
i=3 -> ' '  -> _putchar(' ')
i=4 -> 'B'  -> _putchar('B')
i=5 -> ' '  -> _putchar(' ')
i=6 -> '%'  -> appel find_types avec charactere='d'
    Boucle find_types (vérifie types connus) :
        type 0 -> '%c' -> non
        type 1 -> '%s' -> non
        type 2 -> '%%' -> non
        type 3 -> '%i' -> non
        type 4 -> '%d' -> correspond ! -> appel print_int()
i=7 -> fin de la chaîne
```

## ✅ Tests performed

The following test cases were manually verified to compare the behavior of `_printf` with the standard `printf`:

```c
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);

_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');

_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");

len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");

_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
```
## Flowchart
```
flowchart TD
    A[Start] --> B[_printf appelé avec format et args]
    B --> C{format est NULL ?}
    C -- Oui --> Z[Retourne -1]
    C -- Non --> D[Initialise i = 0, count = 0]
    D --> E{Fin de chaîne ?}
    E -- Oui --> M[va_end sur arg_list]
    M --> N[Retourne count]
    E -- Non --> F{Caractère % ?}
    F -- Non --> G[Écrit le caractère avec _putchar]
    G --> H[Incrémente count]
    H --> I[Incrémente i]
    I --> E
    F -- Oui --> J{Caractère suivant nul ?}
    J -- Oui --> Z2[Retourne -1]
    J -- Non --> K[Appelle find_types avec format et va_list]
    K --> L[Ajoute le résultat à count]
    L --> O[Incrémente i de 2]
    O --> E
```

## 🧑🏼‍💻 Authors

Project carried out as part of Holberton School by:

- [![Yann D. GitHub](https://img.shields.io/badge/GitHub-Yugz29-181717?logo=github&style=flat-square)](https://github.com/Yugz29)

- [![Arsinoé C. GitHub](https://img.shields.io/badge/GitHub-arsicbt-181717?logo=github&style=flat-square)](https://github.com/arsicbt)
