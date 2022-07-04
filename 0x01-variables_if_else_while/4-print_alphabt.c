#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always successful
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{

		if (ltr != 'e' && ltr != 'q')
		
			putchar(ltr);
	}
	{
		putchar('\n');
	}
	return (0);
}
