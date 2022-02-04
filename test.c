/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:56:34 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/02/04 21:56:35 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_element(char const *s, char c)
{
	size_t	count;
	size_t	state;

	state = 0;
	count = 0;
	while (*s)
	{
		if (*s == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			count++;
		}	
		s++;
	}
	return (count);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	else
	{
		while (*src && i < size - 1)
		{
			dst[i] = *src;
			src++;
			i++;
		}
		dst[i] = '\0';
		return (len_src);
	}
}

static size_t	ft_element_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	**ft_free_array(char **array, size_t n)
{
	while (n--)
		free(array[n]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	len_split;
	char	**array;
	int		nb_delim;	
	int		n;

	if (!s)
		return (NULL);
	n = -1;
	nb_delim = ft_count_element(s, c);
	array = malloc((nb_delim + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (n++ < nb_delim)
	{
		while (*s == c)
			s++;
		len_split = ft_element_length(s, c);
		array[n] = calloc(len_split + 1, sizeof(char));
		if (array == NULL)
			return (ft_free_array(array, n));
		ft_strlcpy(array[n], s, len_split + 1);
		s = s + len_split;
	}
    array[nb_delim] = NULL;
	return (array);
}

void freeTab(char * * tab)
{
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}

int main() {
  
  
    char **tab = ft_split("  tripouille  42  ", ' ');
    freeTab(tab);
    system("leaks a.out");
  return 0;


}