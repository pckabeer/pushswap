/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:17:05 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/22 21:58:24 by kpanikka         ###   ########.fr       */
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

	i = 1;
	j = 0;
	sa = NULL;
	sb = NULL;
	data = NULL;
	while (i < argc)
	{
		data = ft_split(argv[i], &count);
		printf(" count : %d\n",count);
		while (j < count && is_duplicate(sa, data[j]))
		{
			printf(" %d --\n", data[j]);
			ft_dlstadd_front(&sa, ft_dlstnew(data[j]));
			printf("hi1\n");
			j++;
		}
		j = 0;
		i++;
	}
	printf("\nStack A \n");
	lst_print(sa);
	sa = ft_rrotate_stack(sa);
	sa = ft_rrotate_stack(sa);
	sa = ft_rrotate_stack(sa);
	printf("\nStack A rotated \n");
	lst_print(sa);
	printf("\nPush b / Stack A\n");
	ft_push(&sa,&sb);
	lst_print(sa);
		printf("\nPush b / Stack B\n");
			ft_push(&sa,&sb);
	ft_push(&sa,&sb);

	lst_print(sb);

	return (0);
}
