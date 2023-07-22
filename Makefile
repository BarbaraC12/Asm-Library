include help.mk

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

.PHONY: run all clean fclean re test

all:	${NAME} # Compile Asm lib

clean: # Clean object files
		${RM} ${OBJS}

fclean:	clean # Clean object, lib and exec files
		${RM} ${NAME} test.a

re:		fclean all # Clean project and rebuild

test: 	re # Recompile with main.c for test
	${CC} ${CFLAGS} main.c ${NAME} -o test.a

# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
$(eval $(RUN_ARGS):;@:)
endif
run: # Run hello.c
	@echo "Given args >> |"${RUN_ARGS}"|"
	nasm -f elf64 -o test.o hello.s
	ld -o hello.a test.o
	@echo -n "run hello.s >> : " && ./hello.a
	@rm -rf hello.a test.o
