#include "main.h"
/**
 * _memset -- fill a block of memory with a specifiv value
 * @s: starting address
 * @b: the desired value
 * @n: number if bytes to be changed
 * Return - number of bytes to be changed 
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++);
	{
		s[i] = b;

		n--;
	}
	return (s);
}
