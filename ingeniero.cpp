#include <iostream>
#include "ingeniero.h"
#include <string>
#include <sstream>
using namespace std;
using std::string;
using std::stringstream;
Ingeniero::Ingeniero(string nombre,int edad,string identidad):nombre(nombre),edad(edad),identidad(identidad){
}
Ingeniero::~Ingeniero(){
}
string Ingeniero::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre << "Edad: " << edad << "Identidad: " << identidad;
	return ss.str();
}
