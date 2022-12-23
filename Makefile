NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc
CLEAN = rm -f
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strlcat.c ft_putchar_fd.c ft_strnstr.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strdup.c ft_calloc.c ft_substr.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_strtrim.c ft_lstlast.c ft_lstadd_back.c ft_lstiter.c ft_lstclear.c ft_itoa.c ft_lstmap.c ft_split.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstdelone.c 

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

%.o:
	@$(CC) $(CFLAGS) -c $(SRC)

$(NAME): %.o 
	@ar rcs $(NAME) $(OBJS)

clean: 
	@$(CLEAN) ./*.o

fclean: 
	@$(CLEAN) ./*.o
	@$(CLEAN) ./*.a

re: fclean all

bonus: 
	$(CC) $(CFLAGS) -c $(SRC_BONUS)
	ar rc $(NAME) $(OBJS_BONUS) $(SRC)

rebonus: fclean bonus 

.PHONY: all clean fclean re
