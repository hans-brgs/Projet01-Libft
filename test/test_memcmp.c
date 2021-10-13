/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:08:09 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/13 09:12:54 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char dst[50] = "Je te bouffe le fiak <3";
	char src[50] =  "Je te bouffe le fiak";
	int size[7] = {50, 24, 12, 22, 1, 0, -2};
	int n;
	int res;
	FILE *f_own;
	FILE *f_src;
	
	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n < 7)
	{
		res = ft_memcmp(dst, src, size[n]);
		if (res == 0)
			fprintf(f_own, "Les %d premiers caractères sont identiques\n", size[n]);
		else
			fprintf(f_own, "Au moins un des caractères diffère. %d\n", res);
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
	while (n < 7)
	{
		res = memcmp(dst, src, size[n]);
		if (res == 0)
			fprintf(f_src, "Les %d premiers caractères sont identiques\n", size[n]);
		else
			fprintf(f_src, "Au moins un des caractères diffère. %d\n", res);
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}
