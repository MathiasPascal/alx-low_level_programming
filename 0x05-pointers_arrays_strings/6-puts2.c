#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to string
 */
void puts2(char *str)
{
	int count = 0;
	int a = 0;
	char *b = str;
	int o;

	while (*b != '\0')
	{
		b++;
		count++;
	}
	a = count - 1;
	for (o = 0 ; o <= a ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
