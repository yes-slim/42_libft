# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:42:28 by yes-slim          #+#    #+#              #
#    Updated: 2022/10/18 15:47:21 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 

CFLAGS = -Wall -Werror -Wextra -c

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
		ft_striteri.c	#ft_putstr_fd.c	\
		#ft_putendl_fd.c	#ft_putnbr_fd	\
		

OBJF = $(CSRCS:.c=.o)


all : $(NAME)


$(NAME) : $(OBJF)
	$(LIBF) $(NAME) $(OBJF)

%.o : %.c
	$(CC) $(CFLAGS) $<

clean :
	$(DEL) $(OBJF)

fclean :
	$(DEL) $(OBJF) $(NAME)

re : fclean all
