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
