#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Entry point
 * Return: 0 is always successful
 */ 


/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
	printf("%d is positive\n", n);
	}
	/* your code goes there */

	return (0);

}
