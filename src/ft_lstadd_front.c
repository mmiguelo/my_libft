/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:33:36 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/02/03 14:48:48 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
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

int	main(void)
{
	t_list	*node2;
	t_list	*node1;
	t_list	*head;

	node2 = ft_lstnew("Node 2");
	if(node2 == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	node1 = ft_lstnew("Node 1");
	if(node1 == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	head = node2;
	print_list(head);
	ft_lstadd_front(&head, node1);
	printf("Linked list after adding node1 to the front\n");
	print_list(head);
	free(node1);
	free(node2);
	return (0);
} */