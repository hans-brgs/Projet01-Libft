/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:06:01 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/06 10:45:53 by hbourgeo         ###   ########.fr       */
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
	char str_src_ftown[] = "abcde";
	
	size = 3;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	fprintf(f_own, "Original = %s	|	", str_src_ftown);
	ft_memmove(str_src_ftown + 2, str_src_ftown, size);
	fprintf(f_own, "memmove = %s\n", str_src_ftown);
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	/***************************/
	/*           Src           */
	/***************************/
	char str_src_ftsrc[] = "abcde";
	
	size = 3;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	fprintf(f_src,"Original = %s	|	", str_src_ftsrc);
	memmove(str_src_ftsrc + 2, str_src_ftsrc, size);
	fprintf(f_src,"memmove = %s\n", str_src_ftsrc);
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}