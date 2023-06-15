#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct x
{
    int n;
    struct x *next;
    struct x *prev;    
}dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif