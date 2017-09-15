# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/13 22:51:03 by ofedorov          #+#    #+#              #
#    Updated: 2017/02/14 00:00:12 by ofedorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	unit_test

FW_FOLDER		=	..
FRAMEWORKLIB	=	-L$(FW_FOLDER) -lunit
FRAMEWORK		=	$(FW_FOLDER)/libunit.a

CC				=	gcc
CFLAGS			+=	-Wall -Werror -Wextra
RM				=	/bin/rm
RMFLAGS			+=	-rf

SRCS			=	main.c \
					unittest_isalnum/00_unittest_isalnum_launcher.c \
					unittest_isalnum/01_unittest_isalnum_test_digit.c \
					unittest_itoa/00_unittest_itoa_launcher.c \
					unittest_itoa/01_unittest_itoa_basic_test.c \
					unittest_strdup/00_unittest_strdup_launcher.c \
					unittest_strdup/01_unittest_strdup_basic_test.c \
					unittest_strlen/00_unittest_strlen_launcher.c \
					unittest_strlen/01_unittest_strlen_basic_test.c

SRCS			+=	../tests_functions/unittest_isalnum.c \
					../tests_functions/unittest_itoa.c \
					../tests_functions/unittest_strdup.c \
					../tests_functions/unittest_strlen.c

OBJS			=	$(notdir $(SRCS:.c=.o))

INCL_FOLDER		=	$(FW_FOLDER)/includes

RED				=	\033[0;31m
GREEN			=	\033[0;32m
NC				=	\033[0m

all: $(NAME)

$(NAME): $(OBJS) $(FRAMEWORK)
	@echo "$(GREEN)Objects created.$(NC)"
	@$(CC) $(CFLAGS) -I $(INCL_FOLDER) $(OBJS) $(FRAMEWORKLIB) -o $(NAME)
	@echo "$(GREEN)Program created.$(NC)"

$(FRAMEWORK):
	@make -C $(FW_FOLDER) re

$(OBJS):
	@$(CC) $(CFLAGS) -I $(INCL_FOLDER) -c $(SRCS)

test: $(NAME)
	@./$(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJS)
	@echo "$(RED)Objects deleted.$(NC)"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(RED)Program deleted.$(NC)"

re: fclean all

.PHONY: all clean test fclean re
