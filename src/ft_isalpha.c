/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:52:50 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/15 19:52:50 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a given character is alphabetic.
 * 
 * @param c The character to be checked.
 * @return Returns a non-zero value if true and zero if false.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main(void)
{
	int	c;
	int	c2;

	c = 'B';
	c2 = '5';
	printf("alphabetical:");
	printf("\n%d\n", ft_isalpha(c));
	printf("non alphabetical:");
	printf("\n%d\n", ft_isalpha(c2));
	return (0);
} */