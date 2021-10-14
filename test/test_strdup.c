/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:47:15 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/14 18:25:26 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int n;
	const char *arr_str[2];
	FILE	*f_own;
	FILE	*f_src;

	arr_str[0] = "Duplique moi, grand fou <3";
	arr_str[1] = "";
	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n < 2)
	{
		fprintf(f_own, "testing strdup(\"%s\") :\n", arr_str[n]);
		fprintf(f_own, "return : \"%s\"\n", ft_strdup(arr_str[n]));
		n++;
	}
	fprintf(f_own, "\n=====================================================\n");
	fclose(f_own);

	/***************************/
	/*           Src           */
	/***************************/
	n = 0;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (n < 2)
	{
		fprintf(f_src, "testing strdup(\"%s\") :\n", arr_str[n]);
		fprintf(f_src, "return : \"%s\"\n", strdup(arr_str[n]));
		n++;
	}
	fprintf(f_src, "\n=====================================================\n");
	fclose(f_src);
	return (0);
}
