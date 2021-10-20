/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:39:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/19 18:25:14 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_delim_count(char *tok, const char *delim)
{
	size_t n;

	n = 0;
	while (*delim)
	{
		if (*delim == *tok)
		{
			*tok = '\0';
			n++;
		}
		delim++;
	}
}

static char	*ft_strtok(char *str, const char *delim)
{
	static char	*tok;

	tok = 0;
	if (str)
		tok = str;
	else if (!tok)
		return 0;
	str = tok + ft_delim_count(tok, delim);
	
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	int		nbr_split;
	int		len_s;
	int		i;
	int		*arr_len;

	nbr_split = ft_nbr_split(s, c);
	
	
	split_arr = malloc((nbr_split + 1), sizeof(char *));
	if (!split_arr)
		return (NULL);
	*split_arr[nbr_split + 1] = "\0";
	while (i <= nbr_split)
	{
		split_arr[i] = ft_calloc(len_s, sizeof(char));
		if (!split_arr[i])
		{
			return (NULL);
			free(split_arr);
		}
	}
	while (i <= nbr_split)
	{
		s = ft_strchr()
		split_arr[i] =  
	}
}
