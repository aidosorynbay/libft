# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 12:44:04 by aorynbay          #+#    #+#              #
#    Updated: 2024/06/26 23:12:51 by aorynbay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# how to test cases memmove?
# remake strlcat
# check memchr
# check strlcat & strlcpy
# check strnstr

SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c


OBJS = $(SRCS:.c=.o)


CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.


NAME = libft.a


all:	$(NAME)

%.o	:	%.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)


fclean:	clean
	$(RM) $(NAME)


re:	fclean $(NAME)


.PHONY: all clean fclean re
