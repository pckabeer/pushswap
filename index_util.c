/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:33:42 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/25 09:38:03 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	min(t_stack *s, int index)
{
	t_stack	*temp;
	t_stack	*small;

	temp = s;
	while (temp)
	{
		if (temp->index == 0)
		{
			small = temp;
			break ;
		}
		temp = temp->next;
	}
	while (temp)
	{ 
		if (temp->data < small->data && temp->index == 0)
			small = temp;
		temp = temp->next;
	}
	small->index = index;
}

void	ft_index_stack(t_stack *a, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		min(a, i);
		i++;
	}
}

void ft_index_shift(t_stack *s)
{
	
	while (s)
	{
		s->index = s->index >> 1;
		s = s->next;
	}
}
t_stack *ft_sort_elements(t_stack *a, t_stack *b, int count)
{
	t_stack *temp;

	temp = a;
	while (--count)
	{				

			//temp = ft_rrotate_stack(temp);
		if((a->index & 1) == 1)
			ft_rotate_stack(&a);
		else
			ft_pushb(&a, &b);
	}
	printf("\n stack b\n");
			lst_print(b);

	while (b)
		ft_pusha(&b, &a);
	printf("\n stack b after push\n");
	lst_print(b);
	printf("lst A now is\n");
	lst_print(a); // ----
	printf("last linein ft_index shift\n");
	return(a);
	
}