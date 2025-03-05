# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 23:44:48 by trsilva-          #+#    #+#              #
#    Updated: 2025/03/06 00:23:00 by trsilva-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_print_char.c ft_print_hex.c ft_print_nbr.c \
       ft_print_ptr.c ft_print_str.c ft_print_unsig.c
OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = cc

DIR_LIBFT = LIBFT
LIBFT = $(DIR_LIBFT)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(DIR_LIBFT)

$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(DIR_LIBFT)
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(DIR_LIBFT)
	rm -f $(NAME)

re: fclean all