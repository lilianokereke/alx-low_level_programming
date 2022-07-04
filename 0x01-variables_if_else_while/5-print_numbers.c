#include <stdio.h>
/**
* main - Entry point
* Return: 0 always successful
*/
int main(void)
{
int ltr;
for (ltr = 0; ltr < 10; ltr++)
{
putchar((ltr % 10) + '0');
}
return (0);
}
