#include "palindrome.h"

/**
 * strrev - Revers a string
 * @str: The input.
 * Return: The revers input as a string.
 */

char *strrev(char *str)
{
char ch[strlen(str)];
char *p;
for (int i = 0; i < strlen(str); i++)
{
ch[i] = str[strlen(str) - i - 1];
}
p = ch;
return (p);
}

/**
 * is_palindrome - Check given unsigned integer is a palindrome.
 * @n: The input.
 * Return: 1 if n is a palindrome, and 0 otherwise.
 */

int is_palindrome(unsigned long n)
{
char str[1 + (int)log10(n)];
sprintf(str, "%lu", n);
if (strcmp(str, strrev(str)) == 0)
{
return (1);
}
return (0);
}