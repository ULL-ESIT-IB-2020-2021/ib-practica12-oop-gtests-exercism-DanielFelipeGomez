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
#include"fecha.h"

int main(int argc, char* argv[]){
    std::ifstream texto_entrada {"fichero_entrada.txt"};
    std::ofstream texto_salida {"fichero_salida.txt"};
    std::string lineas;
    int dia_, mes_, anio_;
    char barra;

    texto_salida << "La fechas ordenadas son:" << std::endl; 

    std::vector<int> vector_fechas;
    int i=0,o=0,u=1,w=2, n=0;
    Fecha::Fecha arr[]={{20, 1, 2017},{12, 11, 2060},{ 3, 12, 1956},{18, 10, 1982},{19, 4, 2011},{ 9, 7, 2013}};



    while(std::getline(texto_entrada,lineas)){

      texto_entrada >> dia_ >> barra >> mes_ >> barra >> anio_ >> barra;
      
      vector_fechas.push_back(dia_);
      vector_fechas.push_back(mes_);
      vector_fechas.push_back(anio_);

      arr[i]={vector_fechas[o],vector_fechas[u],vector_fechas[w]};
     
     i++;
     o+=3;
     u+=3;
     w+=3;}

     OrdenarFechas(arr, n);
     
     texto_salida<< arr[i].GetDia()<<arr[i].GetMes()<<arr[i].GetAnio();

     n = sizeof(arr)/sizeof(arr[0]);
     

     for (int i=0; i<n; i++) {
        texto_salida << arr[i].GetDia() << " " << arr[i].GetMes() << " " << arr[i].GetAnio() << std::endl;
     };

    

}