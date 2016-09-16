#include "ingeniero.h"
#include "mecanico.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
Mecanico::Mecanico(string nombre,int edad,string identidad,string especializacion,double salarioQ)
	:Ingeniero(nombre,edad,identidad),especializacion(especializacion),salarioQ(salarioQ){
}
Mecanico::~Mecanico(){
}
double Mecanico::getSalarioQ()const{
	return salarioQ;
}
double Mecanico::ingresos()const{
	return getSalarioQ();
}
string Mecanico::toString()const{
	stringstream ss;
	ss << "Ingeniero Mecanico: " << Ingeniero::toString() << " Especializacion: " << especializacion << " Salario Quincenal: " << salarioQ;
	return ss.str();
}
