#include<iostream>

class Complejo{
	private:
		int real;
		int imaginario;
	public:
		Complejo(int = 1, int = 1);
		void print(Complejo);
		Complejo add(Complejo, Complejo);
		Complejo sub(Complejo, Complejo);
		int obtenerReal();
		int obtenerImaginario();
		Complejo establecerComplejo(int, int);
		Complejo suma_real(Complejo compejo1, int solo_real);
		
};

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

Complejo Complejo::suma_real(Complejo complejo1, int solo_real){
	Complejo resultadoFinal;
	int parte_real1, parte_real2, parte_imaginaria1,  result_real, result_imag;
	parte_real1= complejo1.obtenerReal();
	parte_imaginaria1= complejo1.obtenerImaginario();

	result_real= parte_real1 + solo_real;
	result_imag= parte_imaginaria1;
	resultadoFinal.establecerComplejo(result_real,result_imag);
	return resultadoFinal;
}

int main() {
  ///Declaración de los objetos a trabajar
  int solo_real= 3;
  Complejo complejo1(4, 5), complejo2(7, -8);
  Complejo resultadoFinal, resultadoFinal2;

  ///Llamada a los métodos de suma y resta de complejos
  resultadoFinal=resultadoFinal.add(complejo1,complejo2);
  resultadoFinal.print(resultadoFinal);
  resultadoFinal=resultadoFinal2.sub(complejo1,complejo2);
  resultadoFinal.print(resultadoFinal);

  std::cout<< "El resultado de sumar (3) + (4+5i) = ";
  resultadoFinal= resultadoFinal.suma_real(complejo1, solo_real);
  resultadoFinal.print(resultadoFinal);

    return 0;
}