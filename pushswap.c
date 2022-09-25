/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:17:05 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/25 09:55:58 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "pushswap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		*data;
	int		j;
	t_stack	*sa;
	t_stack	*sb;
	int		count;
	int		count_stack = 1;

	i = 1;
	j = 0;
	sa = NULL;
	sb = NULL;
	data = NULL;
	while (i < argc)
	{
		data = ft_split(argv[i], &count);
		count_stack+=count;
		printf(" count : %d\n",count);
		while (j < count && is_duplicate(sa, data[j]))
		{
			//printf(" %d --\n", data[j]);
			ft_dlstadd_front(&sa, ft_dlstnew(data[j]));
			//printf("hi1\n");
			//sa->index = count_stack++;
			j++;
		}
		j = 0;
		i++;
	}
			//	printf(" %d --\n", count_stack);
	//printf("\nStack A \n");
	//lst_print(sa);
//		printf("\nStack A Indexed \n");
	 ft_index_stack(sa,count_stack);
	
	//ft_index_shift(sa);
//			lst_print(sa);
//return(0);
	int k=0;
//				printf("\nStack A First sort\n");
	while(count_stack>>k)
	{
	sa = ft_sort_elements(sa,sb,count_stack);
	 ft_index_shift(sa);
	k++;
	}
//				printf("\nStack A Sorted\n");
//		lst_print(sa);
	// sa = ft_sort_elements(sa,sb,count_stack);
	// sa = ft_sort_elements(sa,sb,count_stack);
		//lst_print(sa);

	// 	ft_index_shift(sa);
	// 			printf("\nStack A Indexed Shifted\n");

	// 	lst_print(sa);

	// sa = ft_rrotate_stack(sa);
	// sa = ft_rrotate_stack(sa);
	// sa = ft_rrotate_stack(sa);
	// printf("\nStack A rotated \n");
	// lst_print(sa);
	// printf("\nPush b / Stack A\n");
	// ft_pusha(&sa,&sb);
	// lst_print(sa);
	// 	printf("\nPush b / Stack B\n");
	// 		ft_pusha(&sa,&sb);
	// ft_pusha(&sa,&sb);

	// lst_print(sb);
// 	printf("-- 1 --\n");
// ft_pusha(&sa,&sb);
// 	printf("Stack B\n");
// 	lst_print(sb);
// 	printf("Stack A\n");
// 	lst_print(sa);
// 	// lst_print(sb);
// 	printf("-- 2 --\n");
// ft_pushb(&sa,&sb);
// 	printf("Stack B\n");
// 	lst_print(sb);
// 	printf("Stack A\n");
// 	lst_print(sa);

// 	printf("-- 2 --");
// ft_pushb(&sb,&sa);
// lst_print(sa);
// 	printf("Stack B");
	return (0);
}
