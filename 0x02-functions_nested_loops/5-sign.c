#include "main.h"

/**
 * print_sign -check sign.
 *
 * description: character to check .
 *
 * @n:character to check .
 *
 *Return: 0-if zero,1-if + and -1 if -.
 *
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
