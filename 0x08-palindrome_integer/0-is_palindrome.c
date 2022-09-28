#include "palindrome.h"


/**
 * is_palindrome - Check given unsigned integer is a palindrome.
 * @n: The input.
 * Return: 1 if n is a palindrome, and 0 otherwise.
 */

int is_palindrome(unsigned long n)
{
unsigned long x = 0, aux = n;
while(aux != 0)
{
x = x + (aux % 10);
aux = aux / 10;
x = x * 10;
}
if ((x / 10) == n)
{
return (1);
}
return (0);
}
