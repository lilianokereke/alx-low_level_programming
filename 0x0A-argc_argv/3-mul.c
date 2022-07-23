#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: size of argv
 * @argv: array of strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
