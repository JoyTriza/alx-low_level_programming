#include "main.h"
#include <stdio.h>

/**
 * main - prints all args
 * rgc: arg count
 * argv: arg vector
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc, i++)
	{
		printf("%s\n", argv[i]);
	}
	retun (0);
}