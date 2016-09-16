#pragma once
#include "ingeniero.h"

class Electronico : public Ingeniero{
	double tarifa;
	int dias;
 public:
	Electronico(string,int,string,double,int);
	virtual  ~Electronico();
	virtual double ingresos()const;
	virtual string toString()const;
	void setTarifa(double);
	void setDias(int);
};
