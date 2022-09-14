#include "holberton.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase.
 * Use _putchar twice in your code.
 * Return: Always 0.
 */

void print_alphabet(void)
{
int l = 'a';

while (l <= 'z')
{
_putchar(l);
l += 1;
}
_putchar(10);
}
