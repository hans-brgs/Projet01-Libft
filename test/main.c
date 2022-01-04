/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:04:22 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/11/07 18:59:11 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{	 
	t_list *link = NULL;
	t_list *link1;
	t_list *link2;
	t_list *link3;
	t_list *link4;
	// t_list *last;
	int len = 0;
	int i1 = 1;
	int i2 = 2;
	int i3 = 3;
	int i4 = 4;

	link1 = ft_lstnew(&i1);
	link2 = ft_lstnew(&i2);
	link3 = ft_lstnew(&i3);
	link4 = ft_lstnew(&i4);
	printf("%d",*(int *)link1->content);
	
	ft_lstadd_front(&link, link1);
	ft_lstadd_front(&link, link2);
	ft_lstadd_front(&link, link3);
	
	// last = ft_lstlast(link);
	// printf("%d",*(int *)last->content);
	
	ft_lstadd_back(&link, link4);
	len = ft_lstsize(link);
	printf("%d",len);
	return(0);
}