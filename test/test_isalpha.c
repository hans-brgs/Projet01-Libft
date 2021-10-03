/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:10:28 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/29 22:18:58 by hbourgeo         ###   ########.fr       */
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
		if (ft_isalpha(n))
			fprintf(f_own, "	is a letter.\n");
		else if (!ft_isalpha(n))
			fprintf(f_own, "	is NOT a letter.\n");
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
		if (isalpha(n))
			fprintf(f_src, "	is a letter.\n");
		else if (!isalpha(n))
			fprintf(f_src, "	is NOT a letter.\n");
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
	return (0);
}
