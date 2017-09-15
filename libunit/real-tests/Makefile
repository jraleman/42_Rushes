# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/13 22:51:03 by ofedorov          #+#    #+#              #
#    Updated: 2017/02/13 23:48:15 by ofedorov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	unit_test

### SPECIFY YOUR LIBFT PATH HERE ###
LIBFT_FOLDER	=	libft
####################################

LIBFT			=	$(LIBFT_FOLDER)/libft.a
LIBFTLIB		=	-L$(LIBFT_FOLDER) -lft

FW_FOLDER		=	..
FRAMEWORKLIB	=	-L$(FW_FOLDER) -lunit
FRAMEWORK		=	$(FW_FOLDER)/libunit.a

CC				=	gcc
CFLAGS			+=	-Wall -Werror -Wextra
RM				=	/bin/rm
RMFLAGS			+=	-rf

SRCS			=	main.c \
					ft_itoa/00_itoa_launcher.c \
					ft_itoa/01_itoa_test_with_0.c \
					ft_itoa/02_itoa_basic_test.c \
					ft_itoa/03_itoa_big_number.c \
					ft_itoa/04_itoa_minimum_number.c \
					ft_strjoin/00_strjoin_launcher.c \
					ft_strjoin/01_strjoin_basic_test.c \
					ft_strjoin/02_strjoin_empty_strings.c \
					ft_strjoin/03_strjoin_big_strings.c \
					ft_strncmp/00_strncmp_launcher.c \
					ft_strncmp/01_strncmp_substring.c \
					ft_strncmp/02_strncmp_empty_string.c \
					ft_strncmp/03_strncmp_big_strings.c \
					ft_strncmp/04_strncmp_compare_zero_characters.c \
					ft_strsplit/00_strsplit_launcher.c \
					ft_strsplit/01_strsplit_empty_string.c \
					ft_strsplit/02_strsplit_no_split.c \
					ft_strsplit/03_strsplit_split_start.c \
					ft_strsplit/04_strsplit_split_words.c

OBJS			=	$(notdir $(SRCS:.c=.o))

INCL_FOLDER		=	$(FW_FOLDER)/includes $(LIBFT_FOLDER)/includes

RED				=	\033[0;31m
GREEN			=	\033[0;32m
NC				=	\033[0m

all: $(NAME)

$(NAME): $(OBJS) $(FRAMEWORK) $(LIBFT)
	@echo "$(GREEN)Objects created.$(NC)"
	@$(CC) $(CFLAGS) $(addprefix -I,$(INCL_FOLDER)) $(OBJS) $(LIBFTLIB) $(FRAMEWORKLIB) -o $(NAME)
	@echo "$(GREEN)Program created.$(NC)"

$(LIBFT):
	@make -C $(LIBFT_FOLDER) re

$(FRAMEWORK):
	@make -C $(FW_FOLDER) re

$(OBJS):
	@$(CC) $(CFLAGS) $(addprefix -I,$(INCL_FOLDER)) -c $(SRCS)

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
