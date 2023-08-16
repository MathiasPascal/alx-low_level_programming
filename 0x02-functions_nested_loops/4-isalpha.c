#include "main.h"
/**
 * main - Entry point
 * Description: checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)

{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
