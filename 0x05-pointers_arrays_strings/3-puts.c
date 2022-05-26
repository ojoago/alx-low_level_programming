#include "holberton.h"

/**
 *  _puts - Entery point
 *  @str: point the string we want to print
 *Return: no return
 */

void _puts(char *str)
{
int h;

h = 0;
while (*(str + h) != '\0')
{
_putchar(*(str + h));
h++;
}
_putchar('\n');
}
