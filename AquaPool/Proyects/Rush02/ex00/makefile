CFILES = main.c input_validation.c file.c print.c search.c string.c
OBJS = ${CFILES:.c=.o}
FLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	gcc -o rush-02 ${FLAGS} ${OBJS}

fclean:
	rm -rf *.o
