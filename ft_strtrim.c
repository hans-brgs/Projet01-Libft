/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:55:11 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/18 19:23:15 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char    *str_trim;
    size_t  len_str_trim;

    len_str_trim = ft_strlen(s1);
    str_trim = ft_calloc(len_str_trim + 1, sizeof(char));
    if (!str_trim)
        return (NULL);
    while(*s1)
    {
        if (ft_strrchr(set,*s1) == 0)
        {
            *str_trim = *s1;
            str_trim++;
        }
        s1++;
    }
    return (str_trim);
}
