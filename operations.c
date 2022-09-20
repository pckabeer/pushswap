#include "pushswap.h"


t_stack *ft_rotate_stack(t_stack *sa)
{
	t_stack *temp;

	temp = sa;
	temp->next = NULL;
	ft_lstadd_back(&sa, temp);
	printf("---\n %p ---|| %p",temp,sa);
	lst_print(sa);
	return(temp);
	//sa = temp;
	//temp->next = NULL;
}
// void ft_push(t_stack *a, t_stack *b)
// {
// }
// void stack_index(t_stack *a)
// {}
// void stack_index_bit_shit(t_stack *b)
// {}

