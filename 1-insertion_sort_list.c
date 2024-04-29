#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion.
 * @list: The doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *c_node, *t_node;

	if (list == NULL || *list == NULL)
		return;

	c_node = *list;
	while (c_node != NULL)
	{
		while (c_node->next != NULL && c_node->n > c_node->next->n)
		{
			t_node = c_node->next;
			if (c_node->prev != NULL)
				c_node->prev->next = t_node;
			c_node->next = t_node->next;
			t_node->prev = c_node->prev;

			if (t_node->next != NULL)
				t_node->next->prev = c_node;
			c_node->prev = t_node;
			t_node->next = c_node;

			if (t_node->prev)
				c_node = t_node->prev;
			else
				*list = t_node;
			print_list(*list);
		}
		c_node = c_node->next;
	}
}
