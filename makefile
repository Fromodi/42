# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pablo-ma <pablo-ma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 16:51:57 by pablo-ma          #+#    #+#              #
#    Updated: 2020/01/09 17:12:41 by pablo-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#@
SRCS = 		ft_bzero.c 

OBJS = 		${SRCS:.c=.o}

NAME = 		libft.a

FLAGS =		-Wall -Wextra -Werror

${NAME}:
			@gcc ${FLAGS} -c ${SRCS}
			@ar rc ${NAME} ${OBJS}

all:
			${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY		clean fclean all re
