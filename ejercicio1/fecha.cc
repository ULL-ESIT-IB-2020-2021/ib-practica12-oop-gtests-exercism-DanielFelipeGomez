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

#include"fecha.h"

///Constructor de la clase
Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

///Método para comprobar si un año es bisiesto
bool Fecha::EsBisiesto(int _anio){
        int aux;
        aux= _anio%4;
        if (aux==0){
        std::cout<<"Es bisiesto";
        }else{
        std::cout<<"No es bisiesto";
        }
}


///Método de comparar una fecha con otra
bool comparar(const Fecha &dia1, const Fecha &dia2){
        if (dia1._anio < dia2._anio)
        return true;
        if (dia1._anio == dia2._anio && dia1._mes < dia2._mes)
        return true;
        if (dia1._anio == dia2._anio && dia1._mes == dia2._mes && dia1._dia < dia2._dia)
        return true;
        return false;
}

///Método para ordenar cronológicamente las fechas
void OrdenarFechas(Fecha arr[], int n) {
        std::sort(arr, arr+n, comparar);
}