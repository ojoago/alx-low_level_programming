#include "holberton.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * @size: size of triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
int i;
char k;
int n;
k = '#';
for (i = 1; i <= size; i++)
{
for (n = 0; n < size; n++)
{
if ((n + i) < size)
_putchar(' ');
if ((n + i) >= size)
_putchar(k);
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
