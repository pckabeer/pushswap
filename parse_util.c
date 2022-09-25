/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:47:30 by kpanikka          #+#    #+#             */
/*   Updated: 2022/09/25 09:52:46 by kpanikka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i++] - '0';
	if(num >= 2147483648 && sign == 1)
		exit (0);
	else if (num > 2147483648 && sign == -1)
		exit (0);
	}
	if(str[i]) 
		exit (0);
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
		printf("value %d -- index %d \n",temp->data, temp->index);
		temp=temp->next;
	}
}

// void ft_index_stack(t_stack *a, int count)
// {
// 	t_stack	*small;
// 	t_stack	*temp;
// 	int		i;

// 	i = 1;
// 	while (i <= count)
// 	{

// 		temp = a;
// 		if (!small)
// 		{
// 		small =  temp;
// 		small->index = i;
// 		}
		
// 		while (temp)
// 		{
// 				if(temp->index == 0)
// 				{

// 				if ((temp->data < small->data))
// 				{
// 					small = temp;
// 				}	
// 				}
// 			temp = temp -> next;
			
			
// 		}

// 		small->index = i;
// 		i++;
// 	}
// }
