#include "holberton.h"

/**
 * _strncat - Entry point
 * @dest: hold destination address
 * @src: hold source string
 * @n: store counter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int k; 
int j;
for (k = 0; dest[k] != '\0'; k++)
{

}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[k] = src[j];
k++;
}
dest[k] = '\0';
return (dest);
}
