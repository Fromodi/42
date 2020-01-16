# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 21:37:09 by mmartin-          #+#    #+#              #
#    Updated: 2019/12/04 21:43:05 by mmartin-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.c map_processor.c map_reader.c
TMP			= stdin_tmpfile
OBJS		= ${SRCS:.c=.o}

NAME		= BSQ
FLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			cc -o ${NAME} ${FLAGS} ${SRCS}

all:		${NAME}

clean:
			rm -f ${OBJS} ${TMP}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
