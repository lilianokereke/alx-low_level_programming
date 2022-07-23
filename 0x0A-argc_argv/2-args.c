#include <stdio.h>
/**
 * main - entry point
 * @argc: count
 * @argv: array of string
 * Return:0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
