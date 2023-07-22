# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
$(eval $(RUN_ARGS):;@:)
endif
run:
	@echo ${RUN_ARGS}
	nasm -f elf64 -o test.o hello.s
	ld -o hello.a test.o
	@echo -n ">> : " && ./hello.a
	@rm -rf hello.a test.o

NAME = libasm.a

SRCS =	ft_strlen.s	#\
		# ft_strcmp.s	\
		# ft_strcpy.s	\
		# ft_write.s	\
		# ft_read.s		\
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

.PHONY: run all clean fclean re t

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
		${RM} test

re:		fclean all

test: fclean all
	${CC} ${CFLAGS} main.c ${NAME} -o test

