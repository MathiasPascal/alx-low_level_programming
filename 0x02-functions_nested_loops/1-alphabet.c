#include "main.h"

/**
 * main - Entry point
 * Description: Prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)

{

	char c;

	/**
	 * print_alphabet - Print alphabets
	 */
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
