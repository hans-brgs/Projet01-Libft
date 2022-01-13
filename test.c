#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1_len;
	size_t s2_len;
	char *ptr;
	size_t tot_size;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	tot_size = s1_len + s2_len + 1;

	ptr = malloc(tot_size * sizeof(char));
	if (!ptr)
		return(NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	ft_strlcat(ptr, s2, tot_size);
	return(ptr);
}

int main(void)
{
	char str1[] = "test";
	// char str2[] = "veaatt";
	// size_t n;
	// n = 0;

	char *c;

	c = ft_strdup(str1);
	printf("c = %s\n", c);
	printf("=====================================================\n");

	// char str3[] = "beabtt";
	// char str4[] = "veaatt";
	// c = strncmp(str3, str4, 0);
	// printf("c = %d\n", c );
	printf("=====================================================\n");
}