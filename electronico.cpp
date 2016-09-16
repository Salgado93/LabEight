#include "ingeniero.h"
#include "electronico.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
Electronico::Electronico(string nombre,int edad,string identidad,double tarifa,int dias)
	:Ingeniero(nombre,edad,identidad),tarifa(tarifa),dias(dias){
}
Electronico::~Electronico(){
}
double Electronico::ingresos()const{
	return tarifa*dias;
}
string Electronico::toString()const{
	stringstream ss;
	ss << "Ingeniero Mecanico: " << Ingeniero::toString() << " Tarifa Por Dia: " << tarifa << " Dias Laborales: " << dias;
	return ss.str();
}