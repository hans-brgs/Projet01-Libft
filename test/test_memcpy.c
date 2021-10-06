/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:17:56 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/04 21:27:10 by hbourgeo         ###   ########.fr       */
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
	char str_dest_ftown[] = "Bouffe moi le fiak <3";
	char str_src_ftown[] = "le coeur ";
	
	size = 8;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	fprintf(f_own, "Original = %s	|	", str_dest_ftown);
	ft_memcpy(str_dest_ftown + 11, str_src_ftown, size);
	fprintf(f_own, "memset = %s\n", str_dest_ftown);
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	/***************************/
	/*           Src           */
	/***************************/
	char str_dest_ftsrc[] = "Bouffe moi le fiak <3";
	char str_src_ftsrc[] = "le coeur ";
	
	size = 8;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	fprintf(f_src,"Original = %s	|	", str_dest_ftsrc);
	memcpy(str_dest_ftsrc + 11, str_src_ftsrc, size);
	fprintf(f_src,"memset = %s\n", str_dest_ftsrc);
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}