#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: pointer to character
 */

void print_rev(char *s)
{
	int count = 0;
	int a;

	while (*s != '\0')
	{
		count++;
		a++;
	}
	s--;
	for (a = count; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
