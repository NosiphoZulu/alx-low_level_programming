#include <stdio.h>
/**
 * main - main function
 *
 * Returns: 0(success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
