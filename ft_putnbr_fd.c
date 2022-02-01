/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:48:30 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/02/01 17:07:32 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n_bis;

	n_bis = 0;
	if (n < 0)
	{
		n_bis = -n;
		ft_putchar_fd('-', fd);
	}
	else
		n_bis = n;
	if (n_bis > 9)
	{
		ft_putnbr_fd(n_bis / 10, fd);
		ft_putnbr_fd(n_bis % 10, fd);
	}
	else
		ft_putchar_fd(n_bis + '0', fd);
}
