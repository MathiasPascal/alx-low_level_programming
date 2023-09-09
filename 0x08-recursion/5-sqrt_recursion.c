#include "main.h"
int sqrt_search(int square, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: -1 if no square root
 */

int _sqrt_recursion(int n)
{
	int start_search = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_search(n, start_search));
}
/**
 * sqrt_search - checks integer as candidate for square root
 *
 * @square: square integer
 * @x: integer
 *
 * Return: correct candidate integer
 */

int sqrt_search(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (sqrt_search(square, x - 1));
	else if (x < square / x)
		return (sqrt_search(square, x + 1));
	else
		return (-1);
}
