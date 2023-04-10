#include "main.h"
#include <stdio.h>

/**
 * main - prints no of args
 * argc: argument count
 * argv: arguemnt vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
