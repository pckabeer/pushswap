
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
}	t_stack;

int *ft_split(char *s, int *c);
int	ft_atoi(const char *str);
int is_duplicate(t_stack *lst, int num);
t_stack	*ft_lstnew(int data);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int	ft_lstsize(t_stack *lst);
void	ft_lstclear(t_stack **lst, void (*del)(int));
t_stack	*ft_lstlast(t_stack *lst);



#endif
