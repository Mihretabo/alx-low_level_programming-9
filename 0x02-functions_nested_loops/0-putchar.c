#include "main.h"

/**
 * main - print _putchar
 * Return: On success 0
 */
int main(void)
{
	int i;
	char c[] = "_putchar\n";

	for (i = 0; i < (int)sizeof(c); i++)
	{
		_putchar(*(c + i));
	}
	return (0);
}
