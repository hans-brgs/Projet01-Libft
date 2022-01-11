/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:53:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/11 18:34:32 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	sign;
	int		nbr;

	sign = 0;
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
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	if (sign == -1)
		nbr = -nbr;
	return (nbr);
}
