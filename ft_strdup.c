/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:04:32 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/24 18:06:24 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup_str = malloc(len * sizeof(char));
	if (!dup_str)
		return (0);
	ft_strlcpy(dup_str, s, len);
	return (dup_str);
}
