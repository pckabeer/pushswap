#include "pushswap.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i++] - '0';
	if (num >= 2147483648 && sign == 1)
		return (-1);
	else if (num > 2147483648 && sign == -1)
		return (0);
	else
		return (num * sign);
}

int is_duplicate(t_stack *lst, int num)
{
	t_stack *temp;

	temp = lst;
	while (temp)
	{
		if (temp->data == num)
			return(0);
		temp =temp->next;
	}
	return(1);
}
void lst_print(t_stack *lst)
{
	t_stack *temp;
	//int c=0;

	temp = lst;
	while (temp)
	{
		//printf(" %d-- %d --  %d \n",c++,temp->data,temp->next->data);
		printf("%d \n",temp->data);
		temp=temp->next;
	}
}
