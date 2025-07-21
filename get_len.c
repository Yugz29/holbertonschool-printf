#include "main.h"

/**
 * _strlen - Get the length of a string
 * @s: the string
 * Retrun: the length of the string 's'
**/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
