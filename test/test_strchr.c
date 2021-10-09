/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:49:48 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/09 20:03:08 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int		n;
	char	str[] = "Trouve moi !";
	FILE	*f_own;
	FILE	*f_src;

	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n <= 127)
	{
		fprintf(f_own, "%d	- 	%c	 :", n, n);
		if (ft_strchr(str, n) != NULL)
			fprintf(f_own, "	%s	Trouvé !\n", ft_strchr(str, n));
		else
			fprintf(f_own, "	raté...\n");
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
	while (n <= 127)
	{
		fprintf(f_src, "%d	- 	%c	 :", n, n);
		if (ft_strchr(str, n) != NULL)
			fprintf(f_src, "	%s	Trouvé !\n", strchr(str, n));
		else
			fprintf(f_src, "	raté...\n");
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
	return (0);
}
