#include <stdio.h>
/**
 * main - entry point
 * @argc: number of argument
 * @argv: array of strings
 * Return: it returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
	printf("this is the name %s\n", argv[i]);
	}
	return (0);
}
