# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 21:38:42 by akaabi            #+#    #+#              #
#    Updated: 2022/11/03 00:39:44 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SOURCE = ft_isalpha.c \
            ft_isdigit.c \
            ft_isalnum.c \
            ft_isascii.c \
            ft_isprint.c \
            ft_strlen.c \
            ft_memset.c \
            ft_bzero.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_strlcpy.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_strchr.c \
            ft_strrchr.c \
            ft_strncmp.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_calloc.c \
            ft_strdup.c \
            ft_atoi.c \
            ft_strlcat.c \
            ft_strnstr.c \
            ft_substr.c \
            ft_strjoin.c \
            ft_putchar_fd.c \
            ft_putendl_fd.c \
            ft_putstr_fd.c \
            ft_putnbr_fd.c \
            ft_itoa.c \
            ft_strtrim.c \
            ft_striteri.c \
            ft_strmapi.c \
            ft_split.c
            
bonus_part = ft_lstnew.c \
            ft_lstadd_front.c \
            ft_lstsize.c \
            ft_lstlast.c \
            ft_lstadd_back.c \
            ft_lstdelone.c \
            ft_lstclear.c \
            
OBJECTS    = $(SOURCE:.c=.o)

OBJECTSB = $(bonus_part:.c=.o)

%.o : %.c libft.h
	CC $(CFLAGS) -c $<
    
$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTSB)

fclean: clean
	rm -f $(NAME) 

re: fclean all bonus

bonus:  $(OBJECTSB)
	ar rc $(NAME) $(OBJECTSB)

.PHONY : clean fclean re bonus all