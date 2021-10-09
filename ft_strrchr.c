/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:06:53 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/09 20:21:13 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen(s) + 1;
	while (len_s >= 0)
	{
		if (s[len_s] == c)
			return ((char *)&s[len_s]);
		else
			len_s--;
	}
	return (NULL);
}
