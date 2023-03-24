#include "main.h"

/**
 * _isdigit - checks for a digit
 * @x: the number that is checked
 * Return: 1 for a xter that will be a digit or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
