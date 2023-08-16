#include "main.h"
/**
 * main - Checking for lowercase
 * Return: 1 if lowercase letter, 0 otherwise
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

