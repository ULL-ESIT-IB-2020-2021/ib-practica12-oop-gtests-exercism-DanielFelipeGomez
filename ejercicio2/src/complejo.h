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

#include<iostream>

class Complejo{
	private:
		int real;
		int imaginario;
	public:
		Complejo::Complejo(int = 1, int = 1);
		void print(Complejo);
		Complejo add(Complejo, Complejo);
		Complejo sub(Complejo, Complejo);
		int obtenerReal();
		int obtenerImaginario();
		Complejo establecerComplejo(int, int);
		
};