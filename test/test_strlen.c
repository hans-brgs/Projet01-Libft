/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:02:33 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/10/18 19:03:04 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	char *arr[3];
	int n;
	FILE *f_own;
	FILE *f_src;
	int size;
	
	arr[0] = "t";
	arr[1] = "test";
	arr[2] = "";
	// Own Function Output
	n = 0;
	f_own = fopen("own_fct_output.txt", "w");
	fprintf(f_own, "=====================================================\n");
	while (n <= 2)
	{
		size = ft_strlen(arr[n]);
		fprintf(f_own, "Chaine %d : %s	-	Size : %d\n", n, arr[n], size);
		n++;
	}
	fprintf(f_own, "=====================================================\n");
	fclose(f_own);
	
	// Src Function Output
	n = 0;
	f_src = fopen("src_fct_output.txt", "w");
	fprintf(f_src, "=====================================================\n");
	while (n <= 2)
	{
		size = strlen(arr[n]);
		fprintf(f_src, "Chaine %d : %s	-	Size : %d\n", n, arr[n], size);
		n++;
	}
	fprintf(f_src, "=====================================================\n");
	fclose(f_src);
}
