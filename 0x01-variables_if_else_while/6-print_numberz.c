#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 is always successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	{
		putchar('\n');
	}
	return (0);
}
