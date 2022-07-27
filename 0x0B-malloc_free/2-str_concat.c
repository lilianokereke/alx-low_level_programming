#include <stdlib.h>
/**
 * str_concat - allocating the memory of a concatenated string, lol.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;
			s3 = malloc(sizeof(char) * len);
			if (s3 == NULL)
				return (NULL);
			for (i = 0; s1[i];
					i++)
				s1[j++] = s1[i];
			for (i = 0; s2[i]; i++)
				s3[j++] = s2[i];

					return (s3);
}
