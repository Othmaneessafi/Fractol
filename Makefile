# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oes-safi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/29 18:00:06 by oes-safi          #+#    #+#              #
#    Updated: 2019/12/05 17:15:12 by oes-safi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = fractol.h
mlx1 =  -lmlx -framework OpenGL -framework AppKit -lz -lpthread
LIB = mlx/libmlx.a 
OBJ = main.o maps.o threads.o colors.o libft/ft_atoi.o libft/ft_putstr.o libft/ft_putchar.o zoom.o\
		hook.o tools.o libft/ft_itoa.o maps2.o libft/ft_strcmp.o
CFLAGS = -Wall -Werror -Wextra
CC = gcc
NAME = fractol

all : $(NAME)
%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(mlx1) $(LIB) -o $(NAME) -I $(INC)
	@printf "\033[32mFractol compilation done\n\033[0m"

clean :
	@rm -f $(OBJ)
	@printf "\033[33mFractol objects removed\n\033[0m"

fclean : clean
	@rm -f $(NAME)
	@printf "\033[31mFractol binary file removed\n\033[0m"

re : fclean all
