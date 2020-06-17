#include <stdio.h>
#include "holberton.h"

/**
 * main - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int main (int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
	printf("%d is the largest number\n", largest);

    return 0;
}
