/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:05:02 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/13 11:48:05 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"


int main (void)
{
	char big[] = "hey try to flnd me, try to find mE, try to find me ! Oh yeah";
	char lit[] =  "find me";
	int size[5] = {0, 4, 25, -2, 100};
	int n;
	char	*res;
	FILE *f_own;
	FILE *f_src;
	
	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n < 5)
	{
		res = ft_strnstr(big, lit, size[n]);
		fprintf(f_own, "Testing strnstr(\"%s\", \"%s\", %d) : \n", big, lit, size[n]);
		if (res == 0)
			fprintf(f_own, "NOT FIND\n");
		else if (*res == *big)
			fprintf(f_own, "Little is an empty String\n");
		else
			fprintf(f_own, "FIND -> %s\n",res);
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
	while (n < 5)
	{
		res = strnstr(big, lit, size[n]);
		fprintf(f_src, "Testing strnstr(\"%s\", \"%s\", %d) : \n", big, lit, size[n]);
		if (res == 0)
			fprintf(f_src, "NOT FIND\n");
		else if (*res == *big)
			fprintf(f_src, "Little is an empty String\n");
		else
			fprintf(f_src, "FIND -> %s\n",res);
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}
