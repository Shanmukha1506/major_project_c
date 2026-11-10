#Makefile
a.out:main.o head_mac.o main_body.o main_include.o
	cc main.o head_mac.o main_body.o main_include.o -o a.out
main.o:main.c
	cc -c main.c
head_mac.o:head_mac.c
	cc -c head_mac.c
main_body.o:main_body.c
	cc -c main_body.c
main_include.o:main_include.c
	cc -c main_include.c
