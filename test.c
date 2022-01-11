#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	char	sign;
	int		nbr;
	
	sign = 0;
	nbr = 0;
	while (*str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && isdigit(*str))
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	if (sign == -1)
		nbr = -nbr;
	return (nbr);
}

int main(void)
{
	char str1[] = "   2147483648";
	// char str2[] = "veaatt";
	// size_t n;
	// n = 0;

	int c;

	c = atoi(str1);
	printf("c = %d\n", c);
	printf("=====================================================\n");

	// char str3[] = "beabtt";
	// char str4[] = "veaatt";
	// c = strncmp(str3, str4, 0);
	// printf("c = %d\n", c );
	printf("=====================================================\n");
}