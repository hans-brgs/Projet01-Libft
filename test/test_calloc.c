/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:44:08 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/14 17:00:02 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int n;
	int count;
	int size;
	int *ptr;
	FILE	*f_own;
	FILE	*f_src;

	/***************************/
	/*           Own           */
	/***************************/
	n = 0;
	count = 5;
	size = sizeof(int);
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	fprintf(f_own, "testing calloc(%d,%d) :\n", count, size);
	ptr = (int *)ft_calloc(count, size);
	if (ptr == NULL)
	{
		fprintf(f_own,"Memory allocation failed");
        exit(1);
	}
	while (n < count)
	{
		fprintf(f_own, "%d ", *ptr);
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
	fprintf(f_src, "testing calloc(%d,%d) :\n", count, size);
	ptr = (int *)calloc(count, size);
	if (ptr == NULL)
	{
		fprintf(f_src,"Memory allocation failed");
        exit(1);
	}
	while (n < count)
	{
		fprintf(f_src, "%d ", *ptr);
		n++;
	}
	fprintf(f_src, "\n=====================================================\n");
	fclose(f_src);
	return (0);
}
