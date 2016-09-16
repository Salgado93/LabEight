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
	virtual string getNombre()const;
	virtual int getEdad()const;
	virtual string getIdentidad()const;
	void setNombre(string);
	void setEdad(int);
	void setIdentidad(string);

};
