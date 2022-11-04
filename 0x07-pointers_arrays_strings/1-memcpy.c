#include "main.h"

/**
 * *_memcpy - a function that copied mtmory area
 * *@dest: memory where it is stored
 * *@src: memory where it is copied
 * *@n: number of bytes
 *
 * Return: copies memory a with n a byted change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];

		n--;
	}

	return (dest);
}
