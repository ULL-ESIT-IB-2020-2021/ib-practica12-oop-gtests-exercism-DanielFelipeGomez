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

///Constructor de la clase
Complejo::Complejo (int _real, int _imaginario){
	real = _real;
	imaginario = _imaginario;
}

///Métodos para obtener la parte real y la imaginaria de los objetos
int Complejo::obtenerReal(){
	return real;
}

int Complejo::obtenerImaginario(){
	return imaginario;
}

///Método de impresión de objetos
void Complejo::print(Complejo resultadoFinal){
	
	std::cout << "(" <<resultadoFinal.obtenerReal()<<")" <<" + "<< "(" <<resultadoFinal.obtenerImaginario()<<")"<<"i" << std::endl;
}


///Método de establecimiento de los resultados de complejos
Complejo Complejo::establecerComplejo(int result_real, int result_imag){
	real= result_real;
	imaginario= result_imag;
}

///Método de resta de complejos
Complejo Complejo::add(Complejo complejo1, Complejo complejo2){
	Complejo resultadoFinal;
	int parte_real1, parte_real2, parte_imaginaria1, parte_imaginaria2, result_real, result_imag;
	parte_real1= complejo1.obtenerReal();
	parte_real2= complejo2.obtenerReal();
	parte_imaginaria1= complejo1.obtenerImaginario();
	parte_imaginaria2= complejo2.obtenerImaginario();
	result_real= parte_real1 + parte_real2;
	result_imag= parte_imaginaria1 + parte_imaginaria2;
	resultadoFinal.establecerComplejo(result_real,result_imag);
	return resultadoFinal;
	
}

///Método de resta de complejos
Complejo Complejo::sub(Complejo complejo1, Complejo complejo2){
	Complejo resultadoFinal;
	int parte_real1, parte_real2, parte_imaginaria1, parte_imaginaria2, result_real, result_imag;
	parte_real1= complejo1.obtenerReal();
	parte_real2= complejo2.obtenerReal();
	parte_imaginaria1= complejo1.obtenerImaginario();
	parte_imaginaria2= complejo2.obtenerImaginario();
	result_real= parte_real1 - parte_real2;
	result_imag= parte_imaginaria1 - parte_imaginaria2;
	resultadoFinal.establecerComplejo(result_real,result_imag);
	return resultadoFinal;
	
}