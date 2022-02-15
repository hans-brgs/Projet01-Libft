/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:48:19 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/02/15 21:29:06 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check_base(char *base)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return (i);
}

void ft_putnbr_base_fd (int nbr, char *base, int fd)
{
	unsigned int	nbr_bis;
	size_t			size_base;
	
	nbr_bis = 0;
	size_base = check_base(base);
	if (!size_base)
		return ;
	if (nbr < 0)
	{
		nbr_bis = -nbr;
		ft_putchar_fd('-', fd);
	}
	else
		nbr_bis = nbr;
	if (nbr_bis > 9)
	{
		ft_putnbr_fd(nbr_bis / size_base, fd);
		ft_putnbr_fd(nbr_bis % size_base, fd);
	}
	else
		ft_putchar_fd(nbr_bis + '0', fd);
}