#include "pushswap.h"


void ft_rotate_stack(t_stack **sa)
{
	t_stack *temp;

	temp = (*sa);
	(*sa) = (*sa)->next;
	temp->next = NULL;
	temp->prev = NULL;

	ft_dlstadd_back(sa, temp);
	printf("ra\n");

	//return(sa);
}

t_stack *ft_rrotate_stack(t_stack *sa)
{
	t_stack *back;

	back =ft_dlstlast(sa);
	back -> prev->next = NULL;
	back->prev = NULL;
	ft_dlstadd_front(&sa,back);
	
	return(sa);
}
void ft_pushb(t_stack **a, t_stack **b)
{
	t_stack *temp;

	temp = *a;
	*a =(*a)->next;
	temp->next=NULL;
	temp->prev = NULL;
	ft_dlstadd_front(b,temp);
	printf("pb\n");
}
void ft_pusha(t_stack **b, t_stack **a)
{
	t_stack *temp;

	temp = *b;
	*b =(*b)->next;
	temp->next=NULL;
		temp->prev = NULL;
	ft_dlstadd_front(a,temp);
	write(1, "pa\n", 3);
}
void sa(t_stack **a)
{
	t_stack temp;

	temp.data = (*a)->data;
	temp.index = (*a)->index;
	if ((*a)->next)
	{
		(*a)->data = (*a)->next->data;
		(*a)->index = (*a)->next->index;
		(*a)->next->data = temp.data;
		(*a)->next->index = temp.index;
	}
	write(1,"sa\n",3);
}

void	sb(t_stack **a)
{
	t_stack	temp;

	temp.data = (*a)->data;
	temp.index = (*a)->index;
	if ((*a)->next)
	{
		(*a)->data = (*a)->next->data;
		(*a)->index = (*a)->next->index;
		(*a)->next->data = temp.data;
		(*a)->next->index = temp.index;
	}
	write(1, "sb\n", 3);
}
