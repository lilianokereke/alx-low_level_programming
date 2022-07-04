#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always successful 
 */
int main(void)
{
	char ltr;

	for (ltr = 'z'; ltr >= 'a'; ltr--)
	{
		putchar(ltr);
	}
	{
		putchar('\n');
	}
	return (0);
}
