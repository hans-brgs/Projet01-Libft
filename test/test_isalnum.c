/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:41:21 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/02 19:39:22 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int		n;
	FILE	*f_own;
	FILE	*f_src;

	// Own Function Output
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n <= 127)
	{
		fprintf(f_own, "%d	- 	%c	 :", n, n);
		if (ft_isalnum(n))
			fprintf(f_own, "	is a digit or letter.\n");
		else if (!ft_isalnum(n))
			fprintf(f_own, "	is NOT a digit or letter.\n");
		n++;
	}
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);

	// Src Function Output
	n = 0;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (n <= 127)
	{
		fprintf(f_src, "%d	- 	%c	 :", n, n);
		if (isalnum(n))
			fprintf(f_src, "	is a digit or letter.\n");
		else if (!isalnum(n))
			fprintf(f_src, "	is NOT a digit or letter.\n");
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
	return (0);
}
