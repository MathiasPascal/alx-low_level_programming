#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase, and in uppercase
 *
 * Return: Always success
 */
int main(void)
{

	char small;
	for (small = 'a'; small <= 'z'; small++)
	putchar(small);
	for (small = 'A'; small <= 'Z'; small++)
	putchar(small);
	putchar('\n');
	return(0);
}
