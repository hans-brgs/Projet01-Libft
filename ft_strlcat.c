/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:46:10 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/09 18:28:16 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int j;
	size_t len_dest;
	size_t len_src;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	j = 0;
	
	if (len_src > size)
		return (len_src + size);
	while (src[j] && len_dest + j + 1 < size)
	{
		dst[len_dest + j] = src[j];
		j++;
	}
	dst[len_dest + j] = '\0';
	return (len_dest + len_src);
}
