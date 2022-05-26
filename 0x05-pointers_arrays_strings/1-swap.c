#include "holberton.h"
/**
 * swap_int - Entry point
 *@a: point the integer we want to swap
 *@b: point the integer we want to swap
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;

*b = tmp;

}
