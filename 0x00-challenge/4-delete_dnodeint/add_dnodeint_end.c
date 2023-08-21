#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *last_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL); // Unable to allocate memory for the new node
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) // List is empty
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    last_node = *head;
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    last_node->next = new_node;
    new_node->prev = last_node;
    return (new_node);
}
