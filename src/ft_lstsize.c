/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:13:34 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/02/03 14:40:30 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list.
 * @return The length of the list
 */
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (!lst)
		return (0);
	i = 0;
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*head;

	head = ft_lstnew(NULL);
	ft_lstadd_front(&head, ft_lstnew(NULL));
	ft_lstadd_front(&head, ft_lstnew(NULL));
	printf("%d\n", ft_lstsize(head));
	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
} */