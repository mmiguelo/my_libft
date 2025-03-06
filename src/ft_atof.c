/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:00:27 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/03/06 18:00:27 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to a float: ASCII to float
 * 
 * @param str A pointer to the string to be converted
 * @return Returns the converted float value
 */
float	ft_atof(const char *str)
{
	float	sign;
	float	result;
	float	decimal;

	sign = 1;
	result = 0;
	decimal = 0.1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')	
		str++;
	while (*str >= '0' && *str <= '9')
		result = (result * 10) + (*str++ - '0');
	if (*str == '.')
	{
		str++;
		while (*str >= '0' && *str <= '9')
		{
			result += (*str++ - '0') * decimal;
			decimal /= 10;
		}
	}
	return (result * sign);
}
