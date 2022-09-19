#include "pushswap.h"

t_stack	*ft_lstnew(int data)
{
	t_stack	*element;

	element = malloc(sizeof(t_stack));
	if (element == NULL)
		return (0);
	element -> data = data;
	element -> next = NULL;
	return (element);
}


void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}


void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}


int	ft_lstsize(t_stack *lst)
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


void	ft_lstclear(t_stack **lst, void (*del)(int ))
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


t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
