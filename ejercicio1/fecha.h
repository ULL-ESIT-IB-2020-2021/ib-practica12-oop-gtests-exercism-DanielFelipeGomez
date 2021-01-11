/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file criptografia_final.cc
  * @author Daniel Felipe Gómez alu0101438139@ull.edu.es
  * @date 13 Diciembre 2020
  * @brief El programa resive mediante un fichero fechas y devuelve como salida otro 
  *        fichero con las fechas ordenadas cronológicamente.
  * @bug No encontrados
  */

#include<iostream>
#include<algorithm>
#include<fstream>
#include<algorithm>
#include<vector>

class Fecha {
   public:

    Fecha::Fecha(int, int, int);

    bool Fecha::EsBisiesto(int);

    bool comparar(Fecha, Fecha);

    void OrdenarFechas(Fecha, int);

    int GetDia();
    int GetMes();
    int GetAnio();

   private:
    
    int dia, mes, anio;

};

