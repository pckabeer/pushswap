/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:17:05 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/25 15:59:59 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "pushswap.h"

void ft_error(t_pswap *ps)
{
	(void) *ps;
	//free all memoroes and linked lists
}

int is_sorted(t_stack *s)
{
	while (s->next)
	{
		if(s->data > s->next->data)
		{
			return(0);
		}
		s = s->next;
	}
	return(1);
}

void	init_pswap(t_pswap *ps)
{
	ps->i = 0;
	ps->j = 0;
	ps->sa = NULL;
	ps->sb = NULL;
	ps->data = NULL;
	ps->count_stack = 1;
}

int	main(int argc, char **argv)
{
	t_pswap	ps;

	init_pswap(&ps);
	while (++ps.i < argc)
	{
		ps.data = ft_split(argv[ps.i], &ps.count);
		ps.count_stack += ps.count;
		while (ps.j < ps.count && is_duplicate(ps.sa, ps.data[ps.j]))
			ft_dlstadd_front(&ps.sa, ft_dlstnew(ps.data[ps.j++]));
		ps.j = 0;
	}

	if (is_sorted(ps.sa))
		exit(0);
	ft_index_stack(ps.sa, ps.count_stack);
	ps.i = 0;
	while (ps.count_stack >> ps.i++)
		ps.sa = ft_sort_elements(ps.sa, ps.sb, ps.count_stack);
	lst_print(ps.sa);
	/*sa(&ps.sa);
	printf("\n--swapped--\n");
	lst_print(ps.sa);*/
	return (0);
}
