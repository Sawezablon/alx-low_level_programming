#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list_s
{
	int n;
	struct list_s *next;
    struct list_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
