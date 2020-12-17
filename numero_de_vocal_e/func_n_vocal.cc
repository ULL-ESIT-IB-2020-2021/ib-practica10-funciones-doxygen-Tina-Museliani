/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file func_n_vocal.cc
  * @author Tinatin Museliani alu0101435534@ull.edu.es
  * @date 17 dic 2020
  * @brief Este programa cuenta el número de veces que está escrita la vocal "e" en un fichero de texto.
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include "n_vocal.h"
int ContarVocal(std::string texto){
for (int i=0; i<texto.length(); i++){
  int contador {0};
  char e {'e'};
  if (texto[i]= e){

      contador++;
  }
return contador;
}
}











