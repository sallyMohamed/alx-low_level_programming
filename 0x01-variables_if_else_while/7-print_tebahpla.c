#include <stdio.h>


/**
 *main-program entry point.
 *
 *Return:Always 0 (Success).
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
