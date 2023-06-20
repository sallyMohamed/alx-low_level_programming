#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 *
 * Return: On success 0.
 *
 */
void print_alphabet_x10(void)
{
	char a, count;

	for (count = 0; count < 10; count++)
	{

		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
