# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 11:42:28 by yes-slim          #+#    #+#              #
#    Updated: 2023/06/17 21:29:45 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=================variables=========================#
CFLAGS     = -Wall -Werror -Wextra -c -I includes
NAME       = libft.a
DEL        = rm -rf
SRC_F      = ft_isalpha ft_toupper ft_isdigit ft_tolower ft_isalnum ft_isascii ft_isprint\
			 ft_strchr ft_strrchr ft_strncmp ft_strlcat ft_strlcpy ft_strlen\
			 ft_strnstr ft_strdup ft_substr ft_strjoin ft_strtrim ft_split\
			 ft_memchr ft_memset ft_memcpy ft_memmove ft_memcmp\
			 ft_atoi ft_itoa\
			 ft_calloc ft_bzero\
		     ft_strmapi ft_striteri\
		     ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
SRC        = $(addsuffix .c, $(addprefix Srcs/, $(SRC_F)))
BONUS_F    = ft_lstnew_bonus ft_lstsize_bonus ft_lstlast_bonus\
			 ft_lstadd_back_bonus ft_lstadd_front_bonus\
 			 ft_lstdelone_bonus ft_lstclear_bonus\
			 ft_lstiter_bonus ft_lstmap_bonus
BONUS      = $(addsuffix .c, $(addprefix Bonus/, $(BONUS_F)))
OBJF       = $(SRC:.c=.o)
BONUS_OBJF = $(BONUS_SRCS:.c=.o)
#=================compile===========================#
%.o : %.c
	@echo $(grey)$(italic)"	~Compiling $<"$(reset)
	@cc $(CFLAGS) $< -o $@
#=================rules=============================#
all : $(NAME) 

$(NAME) : $(OBJF)
	@ar -rc $(NAME) $(OBJF)
	@echo $(cyan)$(underline)"libft is ready to use" $(reset)

bonus : $(OBJF) $(BONUS_OBJF)
	@ar -rc $(NAME) $(OBJF) $(BONUS_OBJF)
	@echo $(cyan)$(underline)"libft is ready to use" $(reset)

clean :
	@$(DEL) $(OBJF) $(BONUS_OBJF)
	@echo $(green)$(italic)$(bold)"	~Deleting files..."$(reset)

fclean : clean
	@$(DEL) $(NAME)
	@echo $(green)$(italic)$(bold)"	~Deleting libft..."$(reset)

re : fclean all

.PHONY : all bonus clean fclean re
#================colors=============================#
black = "\033[0;30m"
red = "\033[0;31m"
green = "\033[0;32m"
yellow = "\033[0;33m"
blue = "\033[0;34m"
purple = "\033[0;35m"
cyan = "\033[0;36m"
grey = "\033[0;90m"
#================font===============================#
bold = "\033[1m"
italic= "\033[3m"
underline = "\033[4m"
inverse = "\033[7m"
#===================================================#
reset = "\033[0m"
#===================================================#