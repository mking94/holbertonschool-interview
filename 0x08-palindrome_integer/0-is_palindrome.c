#include "palindrome.h"

/**
 * strrev - Revers a string
 * @str: The input.
 * Return: The revers input as a string.
 */

char *strrev(char *str)
{
char ch[strlen(str)];
for (int i = 0; i < (int)strlen(str); i++)
{
ch[i] = str[strlen(str) - i - 1];
}
str = ch;
return (str);
}

/**
 * is_palindrome - Check given unsigned integer is a palindrome.
 * @n: The input.
 * Return: 1 if n is a palindrome, and 0 otherwise.
 */

int is_palindrome(unsigned long n)
{
char str[80];
sprintf(str, "%lu", n);
if (strcmp(str, strrev(str)) == 0)
{
return (1);
}
return (0);
}
