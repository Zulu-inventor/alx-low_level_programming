#include "main.h"

/**
 * _isupper - checks if a letter is a uppercase
 * @c: The letter to be checked
 * Retern: 1 for uppercase letter or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	return (0);
}
