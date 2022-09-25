/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dllst.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:53:39 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/24 19:47:14 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pushswap.h"
t_stack	*ft_dlstnew(int data)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
	if (element == NULL)
		return (0);
	element -> data = data;
	element -> next = NULL;
	element -> prev = NULL;
	element -> index = 0;
	return (element);
}


void	ft_dlstadd_back(t_stack **lst, t_stack *new)
{
	if (*lst)
	{
		new->prev = ft_dlstlast(*lst);
		ft_dlstlast(*lst)->next = new;
	}
	else
		*lst = new;
}


void	ft_dlstadd_front(t_stack **lst, t_stack *new)
{
   
	if(*lst)
		(*lst)->prev = new;

    new->next = *lst;
	new -> prev = NULL;
	
	*lst = new;
}


int	ft_dlstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}


void	ft_dlstclear(t_stack **lst, void (*del)(int ))
{
	t_stack	*n_lst;

	while (*lst)
	{
		del((*lst)->data);
		n_lst = *lst;
		*lst = n_lst -> next;
		free(n_lst);
	}
}


t_stack	*ft_dlstlast(t_stack *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		lst = lst->next;
	}
	return (lst);
}


void	ft_lstiter(t_stack *lst, void (*f)(int))
{
	while (lst)
	{
		f(lst->data);
		lst = lst->next;
	}
}
