#include <stdio.h>

/**
 *main-program entry point.
 *
 *Return:Always 0 (Success).
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
