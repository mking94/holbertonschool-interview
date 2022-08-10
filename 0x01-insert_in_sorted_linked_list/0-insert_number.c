#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list
 * @number: The input.
 */

 listint_t *insert_node(listint_t **head, int number)
 {
 if(head == null)
 {
 return null;
 }
 while (head->next != NULL)
 {
 listint_t *next = head->next;
 if(head->n <= number && next->n > number){
 listint_t *new = malloc(sizeof(listint_t)); 
 new->n = number;
 new->next = next->next;
 head->next = new;
 return &head;
 }
 }
 return null;
 }
