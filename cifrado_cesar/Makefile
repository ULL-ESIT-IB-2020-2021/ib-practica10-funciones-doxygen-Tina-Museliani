# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Tinatin Museliani
# @date 06 dic 2020
# @brief A Makefile for cifrado_cesar program
# 


CC= g++
CFLAGS= -Wall -Wextra -g -std=c++14
DEPS = cifrado_cesar.h
OBJ = func_cifrado_cesar.o main_cifrado_cesar.o 
EXEC= cifrado_cesar

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

cifrado_cesar: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -f $(OBJ) $(EXEC)