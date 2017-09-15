# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/03 11:58:52 by ofedorov          #+#    #+#              #
#    Updated: 2017/02/13 23:18:34 by ofedorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libunit.a

CC			=	gcc
CFLAGS		+=	-Wall -Werror -Wextra
RM			=	/bin/rm
RMFLAGS		+=	-rf

FRAMEWFD	=	framework

FRAMEWFL	=	launch_tests.c \
				load_test.c \
				new_test.c \
				print_endl.c \
				print_number.c \
				print_str.c \
				str_compare.c

INCLFD		=	includes

SRCS		=	$(addprefix $(FRAMEWFD)/,$(FRAMEWFL))
OBJS		=	$(FRAMEWFL:.c=.o)

RED			=	\033[0;31m
GREEN		=	\033[0;32m
NC			=	\033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Objects created.$(NC)"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)$(NAME) created.$(NC)"

$(OBJS):
	@$(CC) $(CFLAGS) -I $(INCLFD) -c $(SRCS)

clean:
	@$(RM) $(RMFLAGS) $(OBJS)
	@echo "$(RED)Objects deleted.$(NC)"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(RED)$(NAME) deleted.$(NC)"

re: fclean all
