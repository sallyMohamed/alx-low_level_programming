#include "main.h"

/**
 * _isalpha-check if character is alphabet.
 *
 * @c:character to check if it isalphabet.
 *
 * Return: 0-if alphabet,1-if not.
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
