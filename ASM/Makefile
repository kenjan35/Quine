all:
	nasm -f elf64 Colleen.s -o Colleen.o
	gcc -no-pie Colleen.o -o Colleen
	rm Colleen.o

clean:
	rm Colleen.o Colleen
