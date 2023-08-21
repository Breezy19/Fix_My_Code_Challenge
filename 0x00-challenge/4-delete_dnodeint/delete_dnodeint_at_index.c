#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i;

    if (*head == NULL)
    {
        return (-1); // List is empty, nothing to delete
    }

    current = *head;
    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    if (i != index)
    {
        return (-1); // Index out of range
    }

    if (current == *head)
    {
        *head = current->next; // Update the head pointer
    }
    else
    {
        current->prev->next = current->next; // Link previous node to next node
    }

    if (current->next != NULL)
    {
        current->next->prev = current->prev; // Link next node to previous node
    }

    temp = current->next; // Save next node before freeing
    free(current);

    return (1); // Successfully deleted the node
}
