/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:53:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/13 13:24:17 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	n;

	n = 0;
	nbr = 0;
	while (nptr[n])
	{
		if (nptr[n] == '-')
			n++;
		if (ft_isdigit(nptr[n]))
		{
			nbr = nbr * 10;
			nbr = nbr + (nptr[n] - '0');
		}
		else
			return (nbr);
		n++;
	}
	if (nptr[0] == '-')
		return (-nbr);
	else
		return (nbr);
}
