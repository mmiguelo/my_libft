/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:05:50 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/03/06 18:05:50 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of elements in a NULL-terminated array of strings.
 * 
 * @param arr The array of strings to measure.
 * @return The number of elements in the array, or 0 if the array is NULL.
 */
int	ft_array_len(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
	{
		i++;
	}
	return (i);
}
