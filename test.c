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

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;

	return (new);
}

int main(void)
{
	int c = -2147483648;
	// size_t n;
	// n = 0;
	ft_putnbr_fd(c, 1);
	// printf("c = %s\n", c);
	// n++;
	// printf("=====================================================\n");

	// char str3[] = "beabtt";
	// char str4[] = "veaatt";
	// c = strncmp(str3, str4, 0);
	// printf("c = %d\n", c );
	printf("=====================================================\n");
}