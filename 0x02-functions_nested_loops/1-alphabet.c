#include "holberton.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase.
 * Use _putchar twice in your code.
 * Return: Always 0.
 */

void print_alphabet(void)
{
int n;

for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
