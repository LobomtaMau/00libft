# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 16:24:39 by mbaptist          #+#    #+#              #
#    Updated: 2023/04/17 11:54:31 by mbaptist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS = 	ft_atoi.c 			ft_bzero.c 		ft_calloc.c\
				ft_isalnum.c 		ft_isalpha.c 	ft_isascii.c\
				ft_isdigit.c  	ft_isprint.c 	ft_itoa.c\
	 			ft_memchr.c 		ft_memcmp.c 	ft_memcpy.c\
				ft_memmove.c 		ft_memset.c 	ft_putchar_fd.c\
				ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
				ft_strchr.c 		ft_strdup.c 	ft_striteri.c\
				ft_strjoin.c 		ft_strlcat.c 	ft_strlcpy.c\
				ft_strlen.c 		ft_strmapi.c 	ft_strncmp.c\
				ft_strnstr.c 		ft_strrchr.c 	ft_strtrim.c\
				ft_substr.c 		ft_tolower.c 	ft_toupper.c\
				ft_split.c\

BONUS = ft_lstnew.c 		ft_lstadd_front.c ft_lstsize.c\
				ft_lstlast.c 		ft_lstadd_back.c 	ft_lstdelone.c\
				ft_lstclear.c 	ft_lstiter.c 			ft_lstmap.c\

BONUS_OBJS = $(BONUS:.c=.o)

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
AR = ar rcs
RM = rm -f

$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) includes -c $< -o $(<:.c=.o)

bonus: $(OBJS) $(BONUS_OBJS)
			$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean fclean all

.PHONY: all clean fclean re bonus