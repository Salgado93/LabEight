#pragma once
#include <string>
using std::string;

class Ingeniero{
	string nombre;
	int edad;
	string identidad;
 public:
	Ingeniero(string,int,string);
	virtual ~Ingeniero(); 
 	virtual string toString()const;
	virtual double ingresos()const = 0;



};
