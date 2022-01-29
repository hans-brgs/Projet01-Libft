/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:50:09 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/27 17:35:48 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (*s && start)
	{
		s++;
		start--;
	}
	ft_strlcpy(sub_str, s, len + 1);
	return (sub_str);
}
