#include <stdio.h>

/**
 * main-program entry point.
 *
 * Return:0 if no errors, non zero if errors
 *
 */
int main(void)
{
	int i, count = '0', j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = count; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		count++;
	}
	putchar('\n');
	return (0);
}
