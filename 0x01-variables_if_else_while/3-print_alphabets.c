#include <stdio.h>
/**
 * main - Entry point
 * Retun: 0 always successful
 */
int main(void)
{
char ltr;
for (ltr = 'a'; ltr <= 'z'; ltr++)
{
putchar(ltr);
}
for (ltr = 'A'; ltr <= 'Z'; ltr++)
{
putchar(ltr);
}
{
putchar('\n');
}
return (0);
}
