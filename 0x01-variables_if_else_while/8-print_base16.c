#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always successful
 */
int main(void)
{
	int num;
	char ltr;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (ltr = 'a'; ltr <= 'f'; ltr++)
	{
		putchar(ltr);
	}
	{
		putchar('\n');
	}
	return (0);
}
