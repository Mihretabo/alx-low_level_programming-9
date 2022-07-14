#include "main.h"

/**
 * main - prints _putchar to the new line.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter[] = "_putchar";
int i;

for (i = 0; i < 9; i++)
{
_putchar(letter[i]);
}

_putchar('\n');

return (0);
}
