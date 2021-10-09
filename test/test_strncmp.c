/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:27:16 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/09 22:19:32 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"


/*
** Returns true if the n first characters of s1 and s2 are similar, otherwise
** false.
*/
int		ft_strncmp2(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main (void)
{
	char dst[] = "Je te bouffe le fiak <3";
	char src[] =  "Je te bouffe le fiak";
	int size[5] = {24, 22, 1, 0, -2};
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
	while (n < 5)
	{
		res = ft_strncmp(dst, src, size[n]);
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
	while (n < 5)
	{
		res = strncmp(dst, src, size[n]);
		if (res == 0)
			fprintf(f_src, "Les %d premiers caractères sont identiques\n", size[n]);
		else
			fprintf(f_src, "Au moins un des caractères diffère. %d\n", res);
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}
