#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: True if linked list is a palindrome
 */
 int is_palindrome(listint_t **head)
 {
 int i = 0;
 int tab[1024];
 while (head->next != null)
 {
 tab[i] = head->n;
 i++;
 head = head->next;
 }
 for (int j = 0; j < (i / 2); j++)
 {
 if (tab[j] != tab[i - j])
 return 0;
 }
 return 1;
 }
