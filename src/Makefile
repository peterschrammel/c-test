FILES=main modules/foo

all: main

test: main
	./main

main: ${FILES:%=%.o}
	gcc $^ -o main 

%.o: %.c
	gcc $< -c -o $@
