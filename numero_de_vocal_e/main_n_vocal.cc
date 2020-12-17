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
 int main(int argc, char* argv[]){
std::string file = argv[1];

//Debe haber dos parámetros: el nombre del programa y el nombre del archivo a leer.
  if (argc != 2) {
    std::cerr<< "Ha habido algún error, introduzca --help para más detalles.";
  } 
  if (file== "--help"){
      std:: cout<< "Debe indicar el nombre de un fichero de texto a leer.";
  }
std::ifstream inf{file};
 
  // Si no se puede abrir el archivo
  if (!inf) {
    std::cerr << "Uh oh, no se ha podido abrir el archivo.\n";
    return 1;
  }
  std::string strInput;
  while (inf) {
    // Se lee el archivo y se almacena en una string previamente declarada.
    std::getline(inf, strInput);
    }
 std::cout<< "El número de letras 'e' del archivo es: "<<ContarVocal(strInput)<< std::endl;

     return 0;
 }