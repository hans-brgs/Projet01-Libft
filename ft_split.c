/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:39:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/17 17:32:54 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_count_element(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count ++;
		s++;
	}
	return (count + 1);
}

size_t	ft_element_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char	**ft_free_array(char **array, size_t n)
{
	while (n--)
		free(array[n]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_delim;
	size_t	len_split;	
	size_t	n;
	char	**array;

	n = 0;
	nb_delim = ft_count_element(s, c);
	array = malloc((nb_delim + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (nb_delim--)
	{
		len_split = ft_element_length(s, c);
		array[n] = ft_calloc(len_split + 1, sizeof(char));
		if (array == NULL)
			return (ft_free_array(array, n));
		ft_strlcpy(array[n], s, len_split + 1);
		s = s + len_split + 1;
		n++;
	}
	array[nb_delim] = NULL;
	return (array);
}
