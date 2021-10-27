/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:39:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/24 18:53:07 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	**ft_free_array(char	**split_arr, size_t n)
{
	while (n > 0)
	{
		free(split_arr[n--]);
	}
	free(split_arr);
	return (NULL);
}

static size_t	ft_count_word(const char *str, char delim)
{
	int		state;
	size_t	wc;

	state = 0;
	wc = 0;
	while (*str)
	{
		if (*str == delim)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
		str++;
	}
	return (wc);
}

char	*ft_init_str(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, i + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	size_t	wc;
	size_t	n;

	n = 0;
	wc = ft_count_word(s, c);
	split_arr = ft_calloc((wc + 1), sizeof(char *));
	if (!split_arr)
		return (NULL);
	while (n < wc)
	{
		while (*s && s[0] == c)
			s++;
		split_arr[n] = ft_init_str(s, c);
		if (!split_arr[n])
			return (ft_free_array(split_arr, n));
		s = s + ft_strlen(split_arr[n]);
		n++;
	}
	return (split_arr);
}
