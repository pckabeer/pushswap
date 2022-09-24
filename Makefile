# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpanikka <kpanikka@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 20:09:45 by kpanikka          #+#    #+#              #
#    Updated: 2022/09/22 21:06:39 by kpanikka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	= push_swap
cc		= gcc
CFLAG	= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar
ARFLAG	= crs
SRC		= ft_split.c linkedlist.c parse_util.c pushswap.c operations.c dllst.c

OBJS	= $(SRC:.c=.o)

all		: $(NAME)

bonus	: all

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean	:
	$(RM) $(RMFLAG) $(OBJS)
fclean	: clean
	$(RM) $(RMFLAG) $(NAME)

re		: fclean all

$(NAME) : $(OBJS)
	$(cc) $(CFLAG) $(OBJS) -o $(NAME)

.PHONY : all clean fclean re
