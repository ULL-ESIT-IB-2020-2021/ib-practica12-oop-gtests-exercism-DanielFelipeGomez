/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file criptografia_final.cc
  * @author Daniel Felipe Gómez alu0101438139@ull.edu.es
  * @date 13 Diciembre 2020
  * @brief El programa toma dos números complejos y realiza las operciones de suma y resta.
  * @bug No encontrados
  */

#include"complejo.h"

int main() {
  ///Declaración de los objetos a trabajar
  Complejo complejo1(4, 5), complejo2(7, -8);
  Complejo resultadoFinal, resultadoFinal2;

  ///Llamada a los métodos de suma y resta de complejos
  resultadoFinal=resultadoFinal.add(complejo1,complejo2);
  resultadoFinal.print(resultadoFinal);
  resultadoFinal=resultadoFinal2.sub(complejo1,complejo2);
  resultadoFinal.print(resultadoFinal);

    return 0;
}