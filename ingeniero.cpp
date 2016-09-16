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
	cout << "Destructor Ingeniero: " << this << endl;
}
string Ingeniero::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre << " Edad: " << edad << " Identidad: " << identidad;
	return ss.str();
}
string Ingeniero::getNombre()const{
	return nombre;	
}
int Ingeniero::getEdad()const{
	return edad;	
}
string Ingeniero::getIdentidad()const{
	return identidad;	
}
void Ingeniero::setNombre(string nombre){
	this->nombre = nombre;	
}
void Ingeniero::setEdad(int edad){
	this->edad = edad;	
}
void Ingeniero::setIdentidad(string identidad){
	this->identidad = identidad;	
}
