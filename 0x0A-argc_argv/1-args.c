#include <stdio.h>
/**
 * main - entry point
 * @argv: argument vector
 * @argc: number of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
