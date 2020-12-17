/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file func_cifrado_cesar.cc
  * @author Tinatin Museliani alu0101435534@ull.edu.es
  * @date 06 dic 2020
  * @brief (breve explicación del programa)
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */
#include "cifrado_cesar.h"

 std::string CifradoCesar (std::string file, int number){
   for(int i=0; i<file.length(); i++){
          file[i] = file[i] + number;
}

return file;
 }