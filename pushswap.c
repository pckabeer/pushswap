/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:17:05 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/20 11:14:47 by kpanikka         ###   ########.fr       */
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
	int		count;

	i = 1;
	j = 0;
	sa = NULL;
	data = NULL;
	while (i < argc)
	{
		data = ft_split(argv[i], &count);
		printf(" count : %d\n",count);
		while (j < count && is_duplicate(sa, data[j]))
		{
			ft_lstadd_front(&sa, ft_lstnew(data[j]));
			printf(" %d \n", data[j]);
			j++;
		}
		j = 0;
		i++;
	}
	printf("\nStack A \n");
	lst_print(sa);
	sa = ft_rotate_stack(sa);
	printf("\nStack A rotated \n");
	lst_print(sa);
	return (0);
}
