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
		
};

Complejo::Complejo (int _real, int _imaginario){
	real= _real;
	imaginario = _imaginario;
}

int Complejo::obtenerReal(){
	return real;
}

int Complejo::obtenerImaginario(){
	return imaginario;
}

void Complejo::print(Complejo resultadoFinal){
	
	std::cout << "(" <<resultadoFinal.obtenerReal()<<")" <<" + "<< "(" <<resultadoFinal.obtenerImaginario()<<")"<<"i" << std::endl;
}



Complejo Complejo::establecerComplejo(int result_real, int result_imag){
	real= result_real;
	imaginario= result_imag;
}

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
 

int main() {
  Complejo complejo1(4, 5), complejo2(7, -8);
  Complejo resultadoFinal, resultadoFinal2;
  resultadoFinal=resultadoFinal.add(complejo1,complejo2);
  resultadoFinal.print(resultadoFinal);
  resultadoFinal=resultadoFinal2.sub(complejo1,complejo2);
  resultadoFinal.print(resultadoFinal);

    return 0;
}
