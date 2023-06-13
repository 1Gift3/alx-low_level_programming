#include "main.h"
/**
 * _memset - to fill a block of memory with a specific value
 * @s: Starting with address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
