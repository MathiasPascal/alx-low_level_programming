#include "main.h"
int start_check(int x, int y);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: number
 *
 * Return: int 1
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (start_check(2, n));
}

/**
 * start_check - checks to see if number is prime
 *
 * @x: number
 * @y: number
 *
 * Return: int
 */

int start_check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	if (x > y / 2)
		return (1);
	return (start_check(x + 1, y));
}
