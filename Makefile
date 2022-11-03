# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:42:28 by yes-slim          #+#    #+#              #
#    Updated: 2022/11/03 21:34:32 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 

CFLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

LIBF = ar -rc

DEL = rm -rf

CSRCS = ft_isalpha.c\
		ft_toupper.c\
		ft_isdigit.c\
		ft_tolower.c\
		ft_isalnum.c\
		ft_strchr.c\
		ft_isascii.c\
		ft_strrchr.c\
		ft_isprint.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memset.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_atoi.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strnstr.c\
		ft_calloc.c\
		ft_bzero.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_split.c\
		
BONUS_SRCS = ft_lstnew_bonus.c\
			 ft_lstsize_bonus.c\
			 ft_lstlast_bonus.c\
			 ft_lstadd_back_bonus.c\
			 ft_lstadd_front_bonus.c\
 			 ft_lstdelone_bonus.c\
			 ft_lstclear_bonus.c\
			 ft_lstiter_bonus.c\
			 ft_lstmap_bonus.c\
			 
OBJF = $(CSRCS:.c=.o)

BONUS_OBJF = $(BONUS_SRCS:.c=.o)

all : $(NAME) 

$(OBJF) : $(CSRCS)
	$(CC) $(CFLAGS) $(CSRCS)

$(BONUS_OBJF) : $(BONUS_SRCS)
	$(CC) $(CFLAGS) $(BONUS_SRCS)

$(NAME) : $(OBJF)
	$(LIBF) $(NAME) $(OBJF)

bonus : $(OBJF) $(BONUS_OBJF)
	$(LIBF) $(NAME) $(OBJF)	$(BONUS_OBJF)

clean :
	$(DEL) $(OBJF) $(BONUS_OBJF)

fclean :
	$(DEL) $(OBJF) $(BONUS_OBJF) $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re