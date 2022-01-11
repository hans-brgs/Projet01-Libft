#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n)
		return(0);
	while (*s1 && n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


int main(void)
{
	char str1[] = "beabtt";
	char str2[] = "veaatt";
	size_t n;
	n = 0;

	int c;

	 c = ft_strncmp(str1, str2, n);
	printf("c = %d\n", c );
	printf("=====================================================\n");

	char str3[] = "beabtt";
	char str4[] = "veaatt";
	c = strncmp(str3, str4, 0);
	printf("c = %d\n", c );
	printf("=====================================================\n");
}