#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - allocate mem to a string(concat)
 * @s1: first string
 * @s2: second string
 * @n: size of bytes
 * Return: popinter to a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s3;
	int i;
	int s1len, s2len, s3len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len] != '\0'; s1len++)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
		;
		if (n >= s2len)
		{
			n = s2len;
		}
	s3len = s1len + n;

	s3 = malloc(s3len + 1);
		if (s3 == NULL)
			return (NULL);
		for (i = 0; i < s3len; i++)
		{
			if (i < s1len)
				s3[i] = s1[i];
			else
				s3[i] = s2[i - s1len];
		}
						s3[i] = '\0';
							return (s3);
}
