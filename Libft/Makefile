# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sonheres <sonheres@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 12:55:30 by sohernan          #+#    #+#              #
#    Updated: 2023/11/21 17:33:43 by sonheres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_toupper.c ft_tolower.c ft_strrchr.c ft_memcmp.c\
		ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c\
		ft_strchr.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		

OBJECTS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror
		
all: $(NAME)

$(OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $@ $^

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re