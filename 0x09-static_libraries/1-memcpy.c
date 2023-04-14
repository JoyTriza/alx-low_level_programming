#include "main.h"

/**
 * _memcpy - function that copies mem area
 * @dest -mem where is stroed
 * @src - memory is copied
 *@n: number of bytes
 *Return - copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		 int r = 0;
		 int i = n;

		 for (; r < i; r++)
		 {
			 dest[r] = src[i];
			 n--
		 }
		 return (dest);
}
