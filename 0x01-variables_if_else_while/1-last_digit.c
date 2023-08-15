#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program deterines the equality of a random number number
 *
 * Description: Assign a random number to the n after
 * every execution
 *
 * Return - always 0 (Success)
 *
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10 
	if (lastd > 5)
        {
        printf("Last digit of %d is %d and is gretaer than 5\n", n, last);
        }
        else if (lastd == 0)
        {
        printf("Last digit of %d is %d and is 0\n", n, last);
        }
	else if (lastd < 6 && lastd != 0)
        {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
        }
	return (0);
}
