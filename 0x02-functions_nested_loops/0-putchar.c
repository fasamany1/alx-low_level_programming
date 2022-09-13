#include "putchar.h"

/**
 * main - Entry point.
 * Return: Always 0.
 */

int main(void)
{
char *pc = "_putchar";

while (*pc)
{
_putchar(*pc);
pc++;
}
_putchar('\n');

return (0);
}
