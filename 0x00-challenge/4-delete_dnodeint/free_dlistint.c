#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: A pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node_to_free;

    while (head != NULL)
    {
        node_to_free = head;
        head = head->next;
        free(node_to_free);
    }
}
