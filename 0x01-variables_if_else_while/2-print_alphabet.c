#include <stdio.h>

/**
 *main-program entry point.
 *
 *Return:Always 0 (Success).
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
