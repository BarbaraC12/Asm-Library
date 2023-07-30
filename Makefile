include make-help.mk
include make-run.mk

NAME = libasm.a

SRCS =	ft_strlen.s	\
		ft_write.s	\
		ft_strcmp.s	\
		ft_read.s	\
		ft_strcpy.s	#\
	    # ft_strdup.s

OBJS = ${SRCS:.s=.o}

CC		= cc
NA		= nasm -f elf64
RM		= rm -f

CFLAGS		:= -g3
CFLAGS		+= -Wall -Wextra -Werror
# CFLAGS		+= -fsanitize=address

%.o:	%.s
		${NA} $<

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

.PHONY: run all clean fclean re test

all:	${NAME} # Compile Asm lib

clean: # Clean object files
		${RM} ${OBJS}

fclean:	clean # Clean object, lib and exec files
		${RM} ${NAME} test.a

re:		fclean all # Clean project and rebuild

test: 	re # Recompile with main.c for test
	${CC} ${CFLAGS} main.c ${NAME} -o test.a
