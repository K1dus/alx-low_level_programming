#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byte, index;

OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA	for (byte = 0; byte < size; byte += 10)
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA	{
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA		printf("%08x: ", byte);

[5~OAOAOAOAOAOAOAOAOAOA		for (index = 0; index < 10; index++)
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA		{
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA			if ((index + byte) >= size)
				printf("  ");
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA
			else
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA				printf("%02x", *(b + index + byte));
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA
			if ((index % 2) != 0 && index != 0)
OAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOAOA				printf(" ");
		}

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;

			else if (*(b + index + byte) >= 31 &&
				 *(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
