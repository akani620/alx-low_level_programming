#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Description: completes source code
 *
 * Return: 0
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0)
		printf("%ld is positive \n");
	else if (n < 0)
		printf("%ld is negative \n");
	else if (n == 0)
		printf("%ld is zero \n");
	/* your code goes there */
	return (0);
}
