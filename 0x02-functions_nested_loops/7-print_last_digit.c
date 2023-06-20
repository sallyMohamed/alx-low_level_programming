#include "main.h"
/**
 * print_last_digit-prints the last digit of an interger.
 * @a:number to compute last digit.
 * Return:last digit.
 */
int print_last_digit(int a)
{
	int last_di;

	last_di = a %  10;
	if (last_di < 0)
	{
		last_di = last_di * -1;
	}
	_putchar(last_di + '0');
	return (last_di);
}
