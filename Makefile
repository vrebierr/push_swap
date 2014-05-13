# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/12 16:06:31 by vrebierr          #+#    #+#              #
#    Updated: 2014/05/12 16:06:34 by vrebierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = main.c list.c s.c p.c
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra -O3 -g
LFLAGS = -L $(LDIR) -lft
LDIR = libft/

all: $(NAME)

$(NAME):
	make -C $(LDIR)
	gcc -c $(FLAGS) $(SRC) -I $(LDIR)inc
	gcc -o $(NAME) $(OBJS) $(LFLAGS)

clean:
	make clean -C $(LDIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C $(LDIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
