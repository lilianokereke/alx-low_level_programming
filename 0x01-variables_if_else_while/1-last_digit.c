#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return : 0 always successful
 */


/* betty style doc for function main goes there */

int main(void)

{

	int n, last_digit;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5);
{
	printf("Last digit of %d is %d and is greater than 5", n, last_digit);	
}
	/* your code goes there */

	return (0);

}
