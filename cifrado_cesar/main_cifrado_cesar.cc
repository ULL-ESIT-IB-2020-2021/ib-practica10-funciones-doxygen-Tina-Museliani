/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file main_cifrado_cesar.cc
  * @author Tinatin Museliani alu0101435534@ull.edu.es
  * @date 06 dic 2020
  * @brief Este programa toma archivos de texto y los encripta o desencripta siguiendo el cifrado césar.
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include "cifrado_cesar.h"
int main (int argc, char* argv[]){
  std::string file = argv[1];

  if (argc != 3) {
    std::cerr<< "Ha habido algún error, introduzca --help para más detalles.";
  } 
  if (file== "--help"){
    std::cout<< "Para la correcta ejecución, debe indicar el nombre del fichero de texto a codificar. ";
    std::cout<< "También debe indicar el número de caracteres que se trasladará para el cifrado.";
    std::cout<< "Por ejemplo: ejemplo.txt 4"<<std::endl; 
  }
  int n_cifrado= std::stoi(argv[2]);
  //Archivo a leer
  std::ifstream infile{file};
 
  // Si no se puede abrir el archivo
  if (!infile) {
    std::cerr << "Uh oh, no se ha podido abrir el archivo para su lectura.\n";
    return 1;
  }

  std::string strInput;

  while (infile) {
    // Se lee cada línea del fichero y se pone en una string
    std::getline(infile, strInput);
    //std::cout << strInput << '\n' (para comprobar que el archivo se lee correctamente)
  }
 std::ofstream outfile{file};
 outfile<< CifradoCesar(strInput, n_cifrado);
return 0;
}
