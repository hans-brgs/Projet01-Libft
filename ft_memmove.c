/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:37:41 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/29 16:42:42 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	m;

	m = n;
	if (src < dest)
	{
		while (n--)
			*(unsigned char *)(dest + n) = *(const unsigned char *)(src + n);
	}
	else
	{
		dest = ft_memcpy(dest, src, m);
	}
	return (dest);
}
