#include <stdio.h>

/**
 *main-program entry point.
 *
 *Return:Always 0 (Success).
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		if (q == 'e' || q == 'q')
			continue;
		putchar(q);
	}
	putchar('\n');
	return (0);
}
