#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t len_src;
	
	len_src = strlen(src);
	i = 0;
	if (size == 0)
	{
		*dst = '\0';
		return (len_src);
	}
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


#include <string.h>

size_t	ft_count_element(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count ++;
		s++;
	}
	return (count + 1);
}

size_t	ft_element_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char	**ft_free_array(char **array, size_t n)
{
	while (n--)
		free(array[n]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_delim;
	size_t	len_split;	
	size_t	n;
	char	**array;

	n = 0;
	nb_delim = ft_count_element(s, c);
	array = malloc(nb_delim * sizeof(char *));
	if (array == NULL)
		return (ft_free_array(array, n));
	while (nb_delim--)
	{
		len_split = ft_element_length(s, c);
		array[n] = calloc(len_split + 1, sizeof(char));
		if (array == NULL)
			return (NULL);
		ft_strlcpy(array[n], s, len_split + 1);
		s = s + len_split + 1;
		n++;
	}
	return (array);
}


int main(void)
{
	char str1[] = "/test//moi/vite/";
	char set = '/';

	size_t n;
	n = 0;

	char **c;

	c = ft_split(str1, set);
	while(n <= 5)
	{
		printf("c = %s %ld\n", c[n], n);
		n++;
	}
	printf("=====================================================\n");

	// char str3[] = "beabtt";
	// char str4[] = "veaatt";
	// c = strncmp(str3, str4, 0);
	// printf("c = %d\n", c );
	printf("=====================================================\n");
}