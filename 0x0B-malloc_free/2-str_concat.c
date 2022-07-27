#include <stdlib.h>
/**
 * str_concat - allocate memory of the conca  * enated string, lol.
 * @s1: first string
 * @s2: second string
 * Return: return a pointer to the new string * @s3
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, stop;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
		for (j = 0; s2[j] != '\0'; j++)
			;
			s3 = malloc(sizeof(char) * (i + j + 1));
					if (s3 == NULL)
					{
					free(s3);
					return (NULL);
					}
					for (k = 0; k < i; k++)
					s3[k] = s1[k];
					stop = j;
					for (j = 0; j <= stop; k++, j++)
					s3[k] = s2[j];
					return (s3);
}
