#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the number square root
 * Return: the natural sq root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculates natural sq root
 * @n: no to calculate the sq root
 * @i: iterates no
 * Return: the natural sq root
 */

int _sqrt(int n, int i)
{

	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}