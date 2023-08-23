#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[100];
	int a, sum, t;

	sum = 0;	

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		p[a] = rand() % 78;
		sum += (p[a] + '0');
		putchar(p[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			t = 2772 - sum - '0';
			sum += t;
			putchar(t + '0');
			break;
		}
	}

	return (0);
}
