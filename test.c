#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>


void ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr_bis;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		nbr_bis = -n;
		write(fd, "-", 1);
	}
	else 
		nbr_bis = n;
	while (nbr_bis > 9)
	{
		ft_putnbr_fd(nbr_bis / 10, fd);
		nbr_bis = nbr_bis % 10;
	}
	nbr_bis = nbr_bis + '0';
	write(fd, &nbr_bis, 1);
	return ;
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