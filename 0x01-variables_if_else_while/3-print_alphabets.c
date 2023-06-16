#include <stdio.h>

/**
 *main-program entry point.
 *
 *Return:Always 0 (Success).
 */
int main(void)
{
	char r;
	char s;

	for (r = 'a'; r <= 'z'; r++)
	{
		putchar(r);
	}
	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
