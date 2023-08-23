#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 *
 * @dest: pointer to copy to
 * @src: pointer to copy from
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
