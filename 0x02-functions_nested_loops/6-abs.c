#include "main.h"
/**
 * main - computes the absolute value of an integer
 * Return: int absolute value
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
