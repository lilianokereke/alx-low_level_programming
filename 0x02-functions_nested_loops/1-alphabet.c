#include <stdio.h>
/**
 * main - check the code
 * Return: 0 always successful
 */
void print_alphabet(void);
int main(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		putchar(print_alphabet);
	}
	{
		putchar('\n');
	}
	return(0);
}
