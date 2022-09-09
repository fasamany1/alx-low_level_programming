#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in lowercase.
 * Return: 0.
 */

int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
