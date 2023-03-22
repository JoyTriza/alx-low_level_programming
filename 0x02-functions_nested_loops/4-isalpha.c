#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The checker to be checked
 * Return: 1 for alphabetic xter or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 990) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
