/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:11 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/27 17:37:30 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_continuous_occ(char const *s1, char const *set)
{
	size_t	occ;

	occ = 0;
	while (s1[occ])
	{
		if (ft_strchr(set, s1[occ]) != NULL)
			occ++;
		else
			return (occ);
	}
	return (occ);
}

size_t	ft_continuous_occ_rev(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	occ;

	s1_len = ft_strlen(s1);
	occ = 0;
	while (s1_len--)
	{
		if (ft_strchr(set, s1[s1_len]) != NULL)
			occ++;
		else
			return (occ);
	}
	return (occ);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trim_start;
	size_t	trim_end;
	size_t	n;
	size_t	keep;
	char	*str_trim;

	n = 0;
	trim_start = ft_continuous_occ(s1, set);
	trim_end = ft_continuous_occ_rev(s1, set);
	keep = ft_strlen(s1) - (trim_end + trim_start);
	str_trim = ft_calloc(keep + 1, sizeof(char));
	if (str_trim == NULL)
		return (NULL);
	while (trim_start--)
		s1++;
	while (keep--)
	{
		str_trim[n] = *s1;
		s1++;
		n++;
	}
	return (str_trim);
}
