/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:39:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/21 21:28:46 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
ft_strspn return the length of the maximum initial segment
of the string pointed to by s1 which consists entirely of characters
from the string pointed to by retained_char.
*/
static size_t ft_strspn(const char *s1, const char *retained_char)
{
	size_t ret;

	ret = 0;
	while (*s1 && ft_strchr(retained_char, s1++))
		ret++;
	return (ret);
}

/*
ft_strcspn return the length of the maximum initial segment
of the string pointed to by s1 which consists entirely of characters
not from the string pointed to by rejected_char.
*/
static size_t ft_strcspn(const char *s1, const char *rejected_char)
{
	size_t rej;

	rej = 0;
	while (*s1)
	{
		if (ft_strchr(rejected_char, *s1))
			return (rej);
		else
		{
			s1++;
			rej++;
		}		
	}
	return (rej);
}

static char	*ft_strtok(char *str, const char *delim)
{
	static char	*tok;

	tok = 0;
	if (str)
		tok = str;
	else if (!tok)
		return 0;
	str = tok + ft_strspn(tok, delim);
	tok = str + ft_strcspn(str, delim);
	if (tok == str)
		return (tok = 0);
	if (*tok)
	{
		*tok == '\0';
		tok + 1;
	}
	else
		tok = 0;
	return (str);
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
