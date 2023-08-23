#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * if odd len, n = (length_of_the_string - 1) / 2
 *
 * @str: pointer to character
 */
void puts_half(char *str)
{
	int a, b, count;

	count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;

	b = (count / 2);

	if ((count % 2) == 1)
		b = ((count + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

