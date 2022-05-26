#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Reverse an Array
 * @a: point the array to reverse
 * @n: length of an array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
int j;
int i;
int g[1000];

j = 0;
while (j < n)
{
g[j] = a[j];
j++;
}
i = 0;
while (i < n)
{
a[i] = g[j - 1];
j--;
i++;
}
}
