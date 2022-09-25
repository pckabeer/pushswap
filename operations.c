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
	printf("pa\n");
}
// void stack_index(t_stack *a)
// {}
// void stack_index_bit_shit(t_stack *b)
// {}


// void rra(t_stack **sa)
// {
// 	t_stack tmp;

// 	tmp = ft_lstlast(sa);
// 	while((*a)->next->next != NULL)
// 	{

// 	}
// }

