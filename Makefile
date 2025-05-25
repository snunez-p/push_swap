# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snunez-p <snunez-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 08:46:12 by snunez-p          #+#    #+#              #
#    Updated: 2025/05/25 20:38:21 by snunez-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS =	operations/push.c \
				operations/reverse_rotate.c\
				operations/rotate.c\
				operations/swap.c\
				short_sorts/short_sorts.c\
				short_sorts/short_sorts_2.c\
				srcs/checks.c\
				srcs/checks2.0.c\
				srcs/ksort.c\
				srcs/parseo.c\
				srcs/push_swap.c\
				tools/bring2top.c\
				tools/ft_back2front.c\
				tools/ft_exterminio_total_stack.c \
				tools/ft_findp.c\
				tools/ft_iterxsize_stack.c\
				tools/ft_stackadd_front.c\
				tools/ft_stackmove_back.c\
				tools/ft_stckaddback.c\
				tools/ft_stcklstclear.c\
				tools/ft_stcklstnew.c\
				tools/ft_swap_g.c\
				tools/min_max_occ.c\
				tools/tbo.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra -I./includes -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make fclean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
