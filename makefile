#Makefile for "programa" C++ application
#Created by George Franklin 06/05/2018

PROG = bin/programa
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o carro.o celular.o chocolate.o deposito.o duravel.o livro.o nao_duravel.o pizza.o produto.o refrigerante.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC)  $(OBJS)  -o $(PROG)
	mv *.o build/

main.o : include/carro.hpp include/livro.hpp include/celular.hpp include/pizza.hpp include/refrigerante.hpp include/chocolate.hpp include/deposito.hpp
	$(CC) $(CPPFLAGS) -c src/main.cpp

carro.o : include/carro.hpp
	$(CC) $(CPPFLAGS) -c src/carro.cpp

celular.o : include/celular.hpp
	$(CC) $(CPPFLAGS) -c src/celular.cpp

chocolate.o : include/chocolate.hpp
	$(CC) $(CPPFLAGS) -c src/chocolate.cpp

deposito.o : include/deposito.hpp
	$(CC) $(CPPFLAGS) -c src/deposito.cpp

duravel.o : include/duravel.hpp
	$(CC) $(CPPFLAGS) -c src/duravel.cpp

livro.o : include/livro.hpp
	$(CC) $(CPPFLAGS) -c src/livro.cpp

nao_duravel.o : include/nao_duravel.hpp
	$(CC) $(CPPFLAGS) -c src/nao_duravel.cpp

pizza.o : include/pizza.hpp
	$(CC) $(CPPFLAGS) -c src/pizza.cpp

produto.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produto.cpp

refrigerante.o : include/refrigerante.hpp
	$(CC) $(CPPFLAGS) -c src/refrigerante.cpp

clean:
	rm -f $(PROG) build/*.o

	