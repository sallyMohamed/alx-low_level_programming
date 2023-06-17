#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 if no errors, non zero if errors
 */
int main(void)
{
	int j;
	char hex[] = "0123456789abcdef";

	for (j = 0; j <= 15; j++)
	{
		putchar(hex[j]);
	}
	putchar('\n');
	return (0);
}
