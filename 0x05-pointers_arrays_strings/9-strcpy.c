#include "main.h"

/**
 * char *_strcpy - copies the string  pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int 1 = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		1++;
	}
	for ( ; x < 1 ; X++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
