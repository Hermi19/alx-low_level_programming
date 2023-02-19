#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Print single digit numbers
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
