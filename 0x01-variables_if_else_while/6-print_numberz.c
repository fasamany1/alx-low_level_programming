#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all single digit number of base 10.
 * Return: 0.
 */
int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');
return (0);
}
