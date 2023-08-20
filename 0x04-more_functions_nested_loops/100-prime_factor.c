#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor
 * of the number 612852475143
 *
 * p means prime number and d means
 * divisor
 *
 * Return: Always 0
 */

int main(void)
{
	long p = 612852475143, d;

	while (d < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}
		for (d = 3; d < (p / 2); d += 2)
		{
			if ((p % d) == 0)
				p /= d;
		}
	}
	printf("%ld\n", p);

	return (0);
}
