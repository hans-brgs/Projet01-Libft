/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:28:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/06 14:07:26 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
    if (size == 0)
    {
      *dst = '\0';
      return (ft_strlen(src));
    }
    else
    {
		while (src[i] && i < size - 1)
		{
			*dst = src[i];
			dst++;
			i++;
		}
		*dst = '\0';
		return (ft_strlen(src));
	}
}
