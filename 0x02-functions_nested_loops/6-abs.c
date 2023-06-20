#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */
int _abs(int a)
{
	int abs;

	if (a < 0)
	{
		a = a * (-1);
	}
	abs = a;
	return (abs);
}
