#include <stdio.h>

/**
 * main - Print the alphabet in lowercase.
 * Return: 0.
 */

int main(void)
{
int low = 'a';
while (low <= 'z')
{
if (low == 'e' || low == 'q')
{
low += 1;
}
else
{
putchar(low);
low += 1;
}
}
putchar('\n');
return (0);
}
