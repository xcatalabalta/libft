# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcatala- <fcatala-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 16:45:02 by fcatala-          #+#    #+#              #
#    Updated: 2023/01/10 14:49:30 by fcatala-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strlcat.c\
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_memchr.c\
			ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
			ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	=	$(SRC:.c=.o)

OB_BON 	=	$(BONUS:.c=.o)

ALL_OB	=	$(OBJS) $(OB_BON)
	
LIB		= 	ar rcs

CC		= 	gcc

FLAGS	=	-Wall -Wextra -Werror -I.

INCLUDE	=	libft.h

%.o: %.c 	$(INCLUDE)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE) 
			$(LIB) $(NAME) $?

bonus:		$(ALL_OB) $(INCLUDE)
			$(LIB) $(NAME) $?
			@touch $@

RM		=	rm -f

clean:
			$(RM) $(ALL_OB) bonus

fclean:
			$(RM) $(ALL_OB) $(NAME) bonus

re:			fclean all

.PHONY:		all clean fclean re
