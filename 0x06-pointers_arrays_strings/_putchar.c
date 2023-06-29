#include "main.h"
#include "unistd"
/**
 * -putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: On Success 1.
 * On error, -1 is rturned, and errno is set appropriately.
 */
int -putchar(char c)
{
	return (write(1, &c, 1);
}
