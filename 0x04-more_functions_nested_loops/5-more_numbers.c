#include "main.h"

/**
 * more_numbers - prints 10 times the number 0 to 14
 * Rerturn: 10 times the number 0 to 14
 */

int more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
