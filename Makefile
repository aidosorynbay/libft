# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aorynbay <@student.42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 12:44:04 by aorynbay          #+#    #+#              #
#    Updated: 2024/07/02 16:01:44 by aorynbay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# how does free() work in ft_split?


SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
		
OBJS	= ${SRCS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

NAME	= libft.a

all:	${NAME}

%.o	:	%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	echo "ya"
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean ${NAME}

.PHONY: all clean fclean re