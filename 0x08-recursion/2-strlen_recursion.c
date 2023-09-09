#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 *
 * @s: Pointer to string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
