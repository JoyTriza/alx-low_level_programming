#include <unistd.h>
/**
 * putchar - writes character c in the stdout
 * @c - the xter to print
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropiately
 */
int _putchar(char c)

{

	return(write(1, &c, 1));

}
