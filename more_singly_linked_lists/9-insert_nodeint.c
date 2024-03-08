#include "lists.h"
/**
 *insert_nodeint_at_index - inserts node at any position
 *@head: checked output
 *@idx: checked output
 *@n: checked output
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

				temp = *head;
				for (i = 0; temp != NULL && i < idx - 1; i++)
				{
					temp = temp->next;
				}

				if (temp == NULL || temp->next == NULL)
					return (NULL);

				new_node = malloc(sizeof(listint_t));
				if (new_node == NULL)
					return (NULL);

				new_node->n = n;
				new_node->next = temp->next;
				temp->next = new_node;

				return (new_node);
}
