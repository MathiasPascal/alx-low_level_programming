#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
