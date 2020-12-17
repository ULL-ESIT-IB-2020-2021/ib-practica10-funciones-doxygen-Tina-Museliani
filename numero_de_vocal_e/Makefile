# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Tinatin Museliani
# @date 06 dic 2020
# @brief A Makefile for n_vocal program
# 


CC= g++
CFLAGS= -Wall -Wextra -g -std=c++14
DEPS = n_vocal.h
OBJ = func_n_vocal.o main_n_vocal.o 
EXEC= n_vocal

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

n_vocal: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -f $(OBJ) $(EXEC)