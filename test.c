#include <ctype.h>
#include <stdio.h>
#include "bsd/string.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

int main()
{
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);
	if (!elem || !elem2 || !elem3 || !elem4)
		return (0);
	else
	{
		begin = NULL;
		ft_lstadd_back(&begin, elem);
		ft_lstadd_back(&begin, elem2);
		ft_lstadd_back(&begin, elem3);
		ft_lstadd_back(&begin, elem4);
		while (begin)
		{
			printf("%s\n", (char *)begin->content);
			begin = begin->next;
		}
	}
	return (0);
}
