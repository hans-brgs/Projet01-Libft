/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:53:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/27 17:34:25 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	char			sign;
	unsigned int	nbr;

	sign = 1;
	nbr = 0;
	while (*str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	// if (sign > 0 && nbr > INT_MAX)
	// 	return 0;
	// else if (sign < 0 && nbr < INT_MIN)
	// 	return 0;
	// else
		return ((int)(sign * nbr));
}
