#pragma once
#include "ingeniero.h"

class Aerodinamico : public Ingeniero{
	double salarioM;
 public:
	Aerodinamico(string,int,string,double);
	double getSalarioM()const;
	virtual  ~Aerodinamico();
	virtual double ingresos()const;
	virtual string toString()const;
};
