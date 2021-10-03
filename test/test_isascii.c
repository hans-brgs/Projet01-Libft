/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 20:24:00 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/02 20:31:46 by hbourgeo         ###   ########.fr       */
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
	n = -255;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n <= 255)
	{
		fprintf(f_own, "%d	- 	%c	 :", n, n);
		if (ft_isascii(n))
			fprintf(f_own, "	is a ASCII char.\n");
		else if (!ft_isascii(n))
			fprintf(f_own, "	is NOT a ASCII char.\n");
		n++;
	}
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);

	// Src Function Output
	n = -255;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (n <= 255)
	{
		fprintf(f_src, "%d	- 	%c	 :", n, n);
		if (isascii(n))
			fprintf(f_src, "	is a ASCII char.\n");
		else if (!isascii(n))
			fprintf(f_src, "	is NOT a ASCII char.\n");
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
	return (0);
}
