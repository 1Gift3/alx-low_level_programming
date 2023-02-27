#include "main.h"
#include <string.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int p;

	while (s[longi] != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (p = longi - 1; longi > = 0; p--)
	{
		_putchar(*s);
}
	_putchar('\n');
}
