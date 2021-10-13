/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:03:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/13 13:05:27 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int		n;
	char *strs[6];
	FILE	*f_own;
	FILE	*f_src;
	
	strs[0] = "test1";
	strs[1] = "0123456789";
	strs[2] = "0";
	strs[3] = "012345.6789";
	strs[4] = "-012345";
	strs[5] = "-2147483648";
	
	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n < 6)
	{
		fprintf(f_own, "testing atoi(\"%s\") :\n", strs[n]);
		fprintf(f_own, "	%d\n", ft_atoi(strs[n]));
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
	while (n < 6)
	{
		fprintf(f_src, "testing atoi(\"%s\") :\n", strs[n]);
		fprintf(f_src, "	%d\n", atoi(strs[n]));
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
	return (0);
}
