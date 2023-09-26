#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct listint_s
{
	int p;
	struct listint_s *next;
} listint_x;

size_t printt_listint(const listint_x *k);
size_t listint_len(const listint_x *k);
listint_x *reverse_listint(listint_x **head);
size_t print_listint_safe(const listint_x *head);
size_t free_listint_safe(listint_x **k);
listint_x *find_listint_loop(listint_x *head);
listint_x *add_nodeint(listint_x **head, const int p);
listint_x *add_nodeint_end(listint_x **head, const int p);
void free_listint(listint_x *head);
void free_listint2(listint_x **head);
int pop_listint(listint_x **head);
listint_x *get_nodeint_at_index(listint_x *head, unsigned int index);
int sum_listint(listint_x *head);
listint_x *insert_nodeint_at_index(listint_x **head, unsigned int idx, int p);
int delete_nodeint_at_index(listint_x **head, unsigned int index);
#endif
