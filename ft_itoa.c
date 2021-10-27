/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:38:29 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/25 10:24:28 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static size_t	ft_count_digit(int n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	size_t			neg;
	unsigned int	tmp;

	neg = 0;
	len = 0;
	if (n < 0)
	{
		neg = 1;
		tmp = -n;
	}
	len = neg + ft_count_digit(tmp);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
	{
		str[len] = '0' + (tmp % 10);
		tmp /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
