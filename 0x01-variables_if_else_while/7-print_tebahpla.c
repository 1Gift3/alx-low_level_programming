#include <stdio.h>

/**
 * main - printing lowercase alphabets in reverse,
 * then followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
