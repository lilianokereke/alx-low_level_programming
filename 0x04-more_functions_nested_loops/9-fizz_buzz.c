#include <stdio.h>
/**
 * main - print 3 for multiples of 3, 5 for multiples of 5
 * Return: no returnn
 */
int main(void)
{

	int i;

for (i = 0; i <= 0; i++)
{

	if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else if ((i % 3 == 0) && (i % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else
	{
		printf(" %d ", i);
	}
}
printf("\n");
return (0);
}
