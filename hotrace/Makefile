#!/usr/bin/make -f
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsampre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/02 16:44:53 by nsampre           #+#    #+#              #
#    Updated: 2017/03/09 22:52:24 by nsampre          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME			=	hotrace

SRC				=	functions_pack_1.c	\
					functions_pack_2.c	\
					get_next_line.c	\
					main.c	\
					node.c	\
					search.c	\
					store.c

INC				=	./includes/hotrace.h

OBJ				=	$(addprefix $(OBJ_PATH),$(SRC:.c=.o))

CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -Ofast -march=native
#FLAGS			+=	-g
#FLAGS			+=	-fsanitize=thread

SRC_PATH		=	./src/
INC_PATH		=	./includes/
OBJ_PATH		=	./obj/

all:			$(NAME)

$(NAME):		obj	$(OBJ)
				@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
				@printf "\n=> \x1B[33mCompiling $(NAME)...\x1b[37m"
				@printf "\n=> \x1B[32m$(NAME) ready to store shit nigga ! ( ͡° ͜ʖ ͡°) \x1B[37m\n"

obj:
				@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o:	$(SRC_PATH)%.c $(INC)
				@$(CC) $(FLAGS) -I $(INC_PATH) -o $@ -c $<
				@printf "\e[38;5;208m▒\e[0m"

clean:
				@rm -rf $(OBJ_PATH)
				@printf "=> \x1B[31mDeleting $(NAME) .obj files...\x1B[37m\n"

fclean:			clean
				@printf "=> \x1B[31mDeleting $(NAME)...\x1B[37m\n"
				@rm -rf $(NAME)

re:				fclean all

norme:
				@norminette ./src/
				@norminette ./includes/

.PHONY		:	all re clean fclean norme
