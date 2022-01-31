/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:54:49 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/01/29 15:27:19 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	new_list = ft_lstnew((f(lst->content)));
	if (!new_list)
		return (NULL);
	if (lst->next)
	{
		new_list->next = ft_lstmap(lst->next, f, del);
		if (!new_list->next)
		{
			del(new_list->content);
			free(new_list);
			return (NULL);
		}
	}
	return (new_list);
}
