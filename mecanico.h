#pragma once
#include "ingeniero.h"

class Mecanico : public Ingeniero{
	string especializacion;
	double salarioQ;
 public:
	Mecanico(string,int,string,string,double);
	double getSalarioQ()const;
	virtual  ~Mecanico();
	virtual double ingresos()const;
	virtual string toString()const;
	void setEspecializacion(string);
	void setSalarioQ(double);
};
