#include <stdio.h>

/**
 * main-program entry point.
 *
 * Return:0 if no errors, non zero if error
 *
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
