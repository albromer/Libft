# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albromer <albromer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 11:04:08 by albromer          #+#    #+#              #
#    Updated: 2023/01/10 11:04:34 by albromer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
CLEAN = rm -f
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strlcat.c ft_putchar_fd.c ft_strnstr.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strdup.c ft_calloc.c ft_substr.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_strtrim.c ft_itoa.c ft_split.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	$(CLEAN) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

rebonus: fclean bonus 

.PHONY: all clean fclean re bonus
