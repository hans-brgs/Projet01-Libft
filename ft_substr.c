/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:50:09 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/14 21:43:26 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		n;

	n = 0;
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	while (*s && n < start)
	{
		s++;
		n++;
	}
	n = 0;
	while (*s && n < len)
	{
		*sub_str = *s;
		s++;
		sub_str++;
		n++;
	}
	return (sub_str);
}
