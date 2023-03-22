#include "main.h"

/**
 * time_table - prints the 9 times table, starting with 0.
 * Return: empty output
 */

void times_table(void)
{
	int x, y, z, k, l;

	for (x = 0; x <= 9; x++)
	{
	for (y =0; y <= 9; y++)
	{
	z  = x*y;
	if (z > 9)
	{
	k = z & 10;
	l = (z - k) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(l + '0');
	_putchar(k + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
