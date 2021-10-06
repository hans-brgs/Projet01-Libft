/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:23:41 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/04 20:59:35 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	int size;
	FILE *f_own;
	FILE *f_src;
	
	/***************************/
	/*           Own           */
	/***************************/
	char str_own[] = "Bouffe moi le fiak <3";
	
	size = 7;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	fprintf(f_own, "Original = %s	|	", str_own);
	ft_bzero(str_own + 14, size);
	fprintf(f_own, "memset = %s\n", str_own);
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	/***************************/
	/*           Src           */
	/***************************/
	char str_src[] = "Bouffe moi le fiak <3";
	
	size = 7;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	fprintf(f_src,"Original = %s	|	", str_src);
	bzero(str_src + 14, size);
	fprintf(f_src,"memset = %s\n", str_src);
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}