#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Test program for doubly linked list functions.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;

    for (int i = 0; i <= 8; i++)
    {
        add_dnodeint_end(&head, i * 100);
    }

    printf("Original list:\n");
    print_dlistint(head);

    printf("-----------------\n");
    
    delete_dnodeint_at_index(&head, 5);
    printf("List after deleting at index 5:\n");
    print_dlistint(head);

    printf("-----------------\n");

    for (int i = 0; i < 5; i++)
    {
        delete_dnodeint_at_index(&head, 0);
        printf("List after deleting at index 0:\n");
        print_dlistint(head);
        printf("-----------------\n");
    }

    free_dlistint(head);

    return (EXIT_SUCCESS);
}
