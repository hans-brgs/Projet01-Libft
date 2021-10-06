/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:55:26 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/06 14:07:49 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char string[] = "Je te bouffe le fiak <3";
	char buffer1[24];
	int size[5] = {24, 10, 1, 0, -2};
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
		len = ft_strlcpy(buffer1, string, size[n]);
		fprintf(f_own, "Chaine %d : %s	copié dans	buffer : \"%s\" de longueur %d\n", n, string, buffer1, len);
		n++;
	}
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	/***************************/
	/*           Src           */
	/***************************/
	n = 0;
	char buffer2[24];
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (n < 5)
	{
		len = strlcpy(buffer2, string, size[n]);
		fprintf(f_src, "Chaine %d : %s	copié dans	buffer : \"%s\" de longueur %d\n", n, string, buffer2, len);
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}
