#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: Memory where is stored
 *@src: Memory where is copied
 *@n: Number of bytes
 *
 *Return: Copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int i = n;

	for (; y < i; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
