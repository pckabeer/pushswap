/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:51:51 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/25 08:49:48 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_elements
{
	int					data;
	int					index;
	struct	s_elements	*next;
	struct	s_elements	*prev;
}t_stack;

int 	*ft_split(char *s, int *c);
int		ft_atoi(const char *str);
int 	is_duplicate(t_stack *lst, int num);
t_stack	*ft_lstnew(int data);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
void	ft_lstclear(t_stack **lst, void (*del)(int));
t_stack	*ft_lstlast(t_stack *lst);
void	ft_rotate_stack(t_stack **sa);
t_stack *ft_rrotate_stack(t_stack *sa);

void 	ft_pusha(t_stack **a, t_stack **b);
void 	ft_pushb(t_stack **a, t_stack **b);
void 	stack_index(t_stack *a);
void 	stack_index_bit_shit(t_stack *b);
void 	lst_print(t_stack *lst);
void ft_index_stack(t_stack *a, int count);

//double lst
t_stack	*ft_dlstnew(int data);

void	ft_dlstadd_back(t_stack **lst, t_stack *new);
void	ft_dlstadd_front(t_stack **lst, t_stack *new);
int		ft_dlstsize(t_stack *lst);
void	ft_dlstclear(t_stack **lst, void (*del)(int));
t_stack	*ft_dlstlast(t_stack *lst);

void ft_index_shift(t_stack *s);

t_stack *ft_sort_elements(t_stack *a,t_stack *b,int count);

#endif
