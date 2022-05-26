#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: point to the first string
 * @s2: point to second string
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
int j;
int e;
e = 0;
for (j = 0; s1[j] != '\0'; j++)
{
if (s1[j] - s2[j] != 0)
{
e = s1[j] - s2[j];
break;
}
}
if(e == 0 && s1[j] == '\0')
e = s1[j] - s2[j];
return (e);
}
