#include <ctype.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		else
			str++;
	}
	return ((char *)str);
}

int main(void)
{

	char str[5] = "vesst";
	char c;
	char t;
	c = t;
	n = 0;

	while (n < 5)
	{
		c = ft_strchr(str, );
		printf("c = %c\n",a);
		n++;
	}
	printf("=====================================================\n");

	n = 0;

	while (n < 5)
	{
		a = toupper(c[n]);
		printf("c = %c\n",a);
		n++;
	}
	printf("=====================================================\n");

	
}