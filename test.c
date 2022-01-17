#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

size_t ft_number_length(unsigned int tmp)
{
	size_t len_nbr;

	len_nbr = 0;
	if (tmp == 0)
		return(len_nbr + 1);
	while (tmp > 0)
	{
		tmp /= 10;
		len_nbr++;
	}
	return (len_nbr);
}

char *ft_itoa(int nbr)
{
	unsigned int tmp;
	size_t len_nbr;
	char *str;
	int isneg;

	isneg = 0;
	if (nbr < 0)
	{
		tmp = -nbr;
		isneg = 1;
	}
	else
		tmp = nbr;
	len_nbr = isneg + ft_number_length(tmp);
	str = calloc(len_nbr + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len_nbr--)
	{
		str[len_nbr] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}

int main(void)
{
	int nbr[4] = {-2147483648, 2147483647, 0, -255};
	char	*c;
	size_t n;
	n = 0;
	c = ft_itoa(nbr[n]);
	while (n < 4)
	{
		c = ft_itoa(nbr[n]);
		printf("c = %s\n", c);
		n++;
	}
	printf("=====================================================\n");

	// char str3[] = "beabtt";
	// char str4[] = "veaatt";
	// c = strncmp(str3, str4, 0);
	// printf("c = %d\n", c );
	printf("=====================================================\n");
}