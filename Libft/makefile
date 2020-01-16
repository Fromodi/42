# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 16:51:57 by pablo-ma          #+#    #+#              #
#    Updated: 2020/01/14 15:05:15 by pablo-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 		ft_bzero.c ft_memcpy.c ft_memset.c ft_memccpy.c ft_memmove.c

OBJS = 		${SRCS:.c=.o}

NAME = 		libft.a

FLAGS =		-Wall -Wextra -Werror

${NAME}:
			@gcc ${FLAGS} -c ${SRCS}
			@ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean all re
