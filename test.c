#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

t_list    *ft_lstnew(void *content)
{
    t_list    *ptr;

    ptr = malloc(sizeof(t_list));
    if (!ptr)
        return (NULL);
    ptr->content = content;
    ptr->next = NULL;
    return (ptr);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *end;

    if (!lst || !new)
        return;
    end = ft_lstlast(*lst);
    if (!end)
		*lst = new;
	else
		end->next = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}


int main() {
  
  t_list *l1;
  t_list *add1;
  t_list *add2;
  int num0;
  int num1;
  int num2;
  
  num0 = 0;
  num1 = 42;
  num2 = 84;
  
  
  l1 = NULL;
  add1 = ft_lstnew(&num1);
  add2 = ft_lstnew(&num2);
  
  ft_lstadd_front(&l1, add1);
  ft_lstadd_front(&add1, add2);
  while (add1 != NULL)
  {
        printf("%d -> ", *(int *)(add1->content));
        add1 = add1->next;
  }
  

  return 0;
}