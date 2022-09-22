#include "lists.h"

/**
 * is_exist - Check if an element exist in array.
 * @arg0: The element to be checked.
 * @arg1: The array;
 * Retuen: 1 if exist or 0 if not exist.
 */
 
int is_exist(int arg0, int[] arg1) {
    size_t arraylength = sizeof(arg1)/sizeof(arg1[0]);
    for(size_t i = 0; i < arraylength; i++) {
        if(arg0 == arg1[i]) return 1;
    }
    return 0;
}

/**
 * check_cycle - Check if linked list is cycle.
 * @list: The element to be checked.
 * Retuen: 1 if cycle or 0 if not.
 */
 
int check_cycle(listint_t *list) {
    struct listint_t* current = list;
    int tab[1024];
    int i = 0;
    while (current != NULL)
    {
        tab[i] = (int) &current;
        current = current->next;
        if(is_exist((int) &current,tab)){
            return 1;
        }
		i++;
    }
    return 0;
}
