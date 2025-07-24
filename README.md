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

## 🧑🏼‍💻 Authors

Project carried out as part of Holberton School by:

- [![Yann D. GitHub](https://img.shields.io/badge/GitHub-Yugz29-181717?logo=github&style=flat-square)](https://github.com/Yugz29)

- [![Arsinoé C. GitHub](https://img.shields.io/badge/GitHub-arsicbt-181717?logo=github&style=flat-square)](https://github.com/arsicbt)
