#include "holberton.h"
#include<stdio.h>
/**
 * _strcat - Entry point
 * @dest: string to concatinate
 * @src: second string 
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
int j;
int k;
for (j = 0; dest[j] != '\0'; j++)
{

}
for (k = 0; src[k] != '\0'; k++)
{
dest[j] = src[k];
j++;
}
return (dest);
}
