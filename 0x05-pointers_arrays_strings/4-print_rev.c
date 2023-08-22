#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: pointer to character
 */

void print_rev(char *s)
{
	int count; /* finding the length of the char */
	int reduce;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (reduce = count; reduce > 0; reduce--)
	{
		_putchar(*s);
		s--;

	}

	_putchar('\n');
}
