#include "ingeniero.h"
#include "aerodinamico.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
Aerodinamico::Aerodinamico(string nombre,int edad,string identidad,double salarioM)
	:Ingeniero(nombre,edad,identidad),salarioM(salarioM){
}
Aerodinamico::~Aerodinamico(){
}
double Aerodinamico::getSalarioM()const{
	return salarioM;
}
double Aerodinamico::ingresos()const{
	return getSalarioM();
}
string Aerodinamico::toString()const{
	stringstream ss;
	ss << "Ingeniero Aerodinamico " << Ingeniero::toString() << " Salario Mensual $: " << salarioM;
	return ss.str();
}
void Aerodinamico::setSalarioM(double salarioM){
	this->salarioM = salarioM;
}
