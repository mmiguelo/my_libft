/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:19:02 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/02/03 14:48:04 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given node and every successor of that node,
using the function ’del’ and free(3). Finally, the pointer to the list must
be set to NULL.
 * 
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

/* static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
void delete_content(void *content)
{
    free(content);
}
int	main(void)
{
	t_list	*node3;
	t_list	*node2;
	t_list	*node1;
	t_list	*head;

	node1 = ft_lstnew("Node 1");
	if(node1 == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	node2 = ft_lstnew("Node 2");
	if(node2 == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	node3 = ft_lstnew("Node 3");
	if(node3 == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	head = node1;
	node1->next = node2;
	node2->next = node3;
	printf("List before 'clear'\n");
	print_list(head);
	printf("Linked list after using 'clear'\n");
	ft_lstclear(&head, delete_content);
	print_list(head);
	return (0);
} */