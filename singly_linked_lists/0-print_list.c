#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - Check the len of an str.
 * @s: char *
 * Return: the len.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * print_list - Print all element of a list_t
 * @h: Pointer to the end of the list
 * Return: The number of nodes.
**/
size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", _strlen(h->str), h->str);
		}
		h = h->next;
		len++;
	}

	return (len);
}
