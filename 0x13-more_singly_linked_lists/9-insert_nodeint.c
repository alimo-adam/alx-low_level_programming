#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the first node of the list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: value to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i = 0;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0) {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    while (i < idx - 1) {
        if (current == NULL) {
            free(new_node);
            return (NULL);
        }
        current = current->next;
        i++;
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
