#include "main.h"

/**
 * main - function to print alphabet in lower case
 *Description: 'prints _putchar to stdout'
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
