# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:42:28 by yes-slim          #+#    #+#              #
#    Updated: 2022/10/30 14:11:11 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

LIBF = ar -rc

DEL = rm -rf

CSRCS = ft_isalpha.c	ft_toupper.c	\
		ft_isdigit.c	ft_tolower.c	\
		ft_isalnum.c	ft_strchr.c		\
		ft_isascii.c	ft_strrchr.c	\
		ft_isprint.c	ft_strncmp.c	\
		ft_memchr.c		ft_memset.c		\
		ft_memcpy.c		ft_memmove.c	\
		ft_memcmp.c		ft_atoi.c		\
		ft_strlcat.c	ft_strlcpy.c	\
		ft_strlen.c		ft_strnstr.c	\
		ft_calloc.c		ft_bzero.c		\
		ft_strdup.c		ft_substr.c		\
		ft_strjoin.c	ft_strtrim.c	\
		ft_itoa.c		ft_strmapi.c	\
		ft_striteri.c	ft_putchar_fd.c	\
		ft_putstr_fd.c	ft_putendl_fd.c	\
		ft_putnbr_fd.c	ft_split.c		\

BONUS_SRCS = ft_lstnew.c		ft_lstsize.c	ft_lstlast.c \
			 ft_lstadd_back.c	ft_lstadd_front.c			 \
 			 ft_lstdelone.c		ft_lstclear.c	ft_lstiter.c \
			 
OBJF = $(CSRCS:.c=.o)

BONUS_OBJF = $(BONUS_SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJF)
	$(LIBF) $(NAME) $(OBJF)

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $^

bonus : $(OBJF) $(BONUS_OBJF)
	$(LIBF) $(NAME) $(OBJF)	$(BONUS_OBJF)

clean :
	$(DEL) $(OBJF) $(BONUS_OBJF)

fclean :
	$(DEL) $(OBJF) $(BONUS_OBJF) $(NAME)

re : fclean all
