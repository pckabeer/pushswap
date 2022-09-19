# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpanikka <kpanikka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 20:09:45 by kpanikka          #+#    #+#              #
#    Updated: 2022/09/19 20:39:57 by kpanikka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	= push_swap
cc		= gcc
CFLAG	= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar
ARFLAG	= crs
SRC		= ft_split.c linkedlist.c parse_util.c pushswap.c

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
