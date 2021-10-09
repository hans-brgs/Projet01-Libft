/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:39:44 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/09 19:09:49 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char dst1[25] = "Je te bouffe";
	char src1[25] =  "le fiak <3";
	int size[5] = {24, 22, 1, 0, -2};
	int n;
	int len;
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
		ft_strlcpy(dst1, "Je te bouffe", 13);
		ft_strlcpy(src1, "le fiak <3", 11);
		len = ft_strlcat(dst1, src1, size[n]);
		fprintf(f_own, "Test %d : dest = \"%s\" return = %d\n", n, dst1, len);
		n++;
	}
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	/***************************/
	/*           Src           */
	/***************************/
	n = 0;
	char dst2[25] = "Je te bouffe";
	char src2[25] =  "le fiak <3";
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (n < 5)
	{
		ft_strlcpy(dst2, "Je te bouffe", 13);
		ft_strlcpy(src2, "le fiak <3", 11);
		len = strlcat(dst2, src2, size[n]);
		fprintf(f_src, "Test %d : dest = \"%s\" return = %d\n", n, dst2, len);
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}
