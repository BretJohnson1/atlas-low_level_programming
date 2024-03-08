#include "lists.h"
/**
 *free_listint2 - frees list and sets to null
 *@head: checked output
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	printf("freed !\n");
	*head = NULL;
}
