/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 07:49:15 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/13 08:51:24 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	int n;
	int j;
	char str[] = "abcdefghijklmnopqrstuvwxyz 0123456789";
	char chr[] = "amz 059 AMZ";
	int memsize[3] = {0, 37, 12};
	char *ptr;
	FILE *f_own;
	FILE *f_src;
	
	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	j = 1;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (chr[n])
	{
		j = 0;
		while (j < 3)
		{
			ptr = ft_memchr(str, chr[n], memsize[j]);	
			fprintf(f_own, "Testing memchr(%s, %c, %d) : \n", str, chr[n], memsize[j]);
			if (ptr)
				fprintf(f_own, "	FOUND\n");
			else
				fprintf(f_own, "	NOT FOUND\n");
			j++;
		}
		n++;
	}
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	/***************************/
	/*           Src           */
	/***************************/
	n = 0;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (chr[n])
	{
		j = 0;
		while (j < 3)
		{
			ptr = memchr(str, chr[n], memsize[j]);
			fprintf(f_src, "Testing memchr(%s, %c, %d) : \n", str, chr[n], memsize[j]);
			if (ptr)
				fprintf(f_src, "	FOUND\n");
			else
				fprintf(f_src, "	NOT FOUND\n");
			j++;
		}
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}