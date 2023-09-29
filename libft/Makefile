# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 12:00:13 by dialarco          #+#    #+#              #
#    Updated: 2023/07/20 16:19:06 by dialarco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strlcat.c ft_memcmp.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c \
		ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

OBJCS = $(FILES:%.c=%.o)

BONUS_OBJCS = $(BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror
 
$(NAME): $(OBJCS)
	ar rc $(NAME) $(OBJCS)

all: $(NAME)

clean:
	rm -f $(OBJCS) $(BONUS_OBJCS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJCS)
		ar rcs $(NAME) $(BONUS_OBJCS)

.PHONY: all clean fclean re	bonus