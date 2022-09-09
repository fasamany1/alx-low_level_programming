#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int low = 'a';
int up = 'A';
while (low <= 'z')
{
putchar(low);
low += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}
