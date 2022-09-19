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
	(void) lst;
	(void) num;
	//check whether the data is in the linked list
	return(1);

}