#include "holberton.h"
/**
 *_strlen - Entry point
 *@s: point to the char
 *
 * Return: 0
 */
int _strlen(char *s)
{
int l;
l = 0;
while (*(s + l) != '\0')
{
l++;
}
return (l);
}
