#include "main.h"
#include <stddef.h>

/**
 * _strstr - searches string for a substring
 * @haystack: string to search
 * @needle: the substring to find
 *
 * Return: pointer to first matching substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; *(needle + i); i++)
			if (*(needle + i) != *(haystack + i))
				break;
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA		if (!*(needle + i))
			return (haystack);
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA		haystack++;
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA	}
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA	return (NULL);
}
