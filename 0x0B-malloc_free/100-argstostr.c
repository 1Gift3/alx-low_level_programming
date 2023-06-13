#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main entry
 * @ac: int of input
 * @av: double pointer of array
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{

	int a, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
		{
			str[r] = av[a][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
