#include <stdio.h>

/**
 * main - Prints sum of even fibonacci numbers
 * less than 4,000,000
 * Return: Nothing!
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4,000,000)
	{
	k += j;
	if (k % 2 == 0)
	sum += k;
	j = k - j;
	++i;
	}
	printf("%d\n", sum);
	return (0);
}
