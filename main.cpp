#include "ingeniero.h"
#include "aerodinamico.h"
#include "mecanico.h"
#include "electronico.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <typeinfo>

using namespace std;
int menu();
int menuIngenieros();


int main(int argc, char* argv[]){
	int opcion = 0;
	vector <Ingeniero*>listaIngenieros;

	while((opcion = menu()) != 6){
		if(opcion == 1){
			int op = 0;
			while ((op = menuIngenieros()) != 4){
				if (op == 1){
					string nombre,identidad;
					int edad; 
					double salarioM;
					cout << "Ingrese Nombre: " << endl;
					cin >> nombre;
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
					cout << "Ingrese Identidad: " << endl;
					cin >> identidad;
					cout << "Ingrese Salario Mensual $: " << endl;
					cin >> salarioM;
					listaIngenieros.push_back(new Aerodinamico(nombre,edad,identidad,salarioM));
					cout << "AGREGADO!" << endl;
				}
				if(op == 2){
					string nombre,identidad,especializacion;
					int edad;
					double salarioQ;
					cout << "Ingrese Nombre: " << endl;
					cin >> nombre;
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
					cout << "Ingrese Identidad: " << endl;
					cin >> identidad;
					cout << "Ingrese Especializacion: " << endl;
					cin >> especializacion;
					cout << "Ingrese Salario Quincenal $: " << endl;
					cin >> salarioQ;
					listaIngenieros.push_back(new Mecanico(nombre,edad,identidad,especializacion,salarioQ));
					cout << "AGREGADO!" << endl;
				}
				if(op == 3){
					string nombre,identidad;
					int edad;
					double tarifa;
					int dias;
					cout << "Ingrese Nombre: " << endl;
					cin >> nombre;
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
					cout << "Ingrese Identidad: " << endl;
					cin >> identidad;
					cout << "Ingrese Tarifa Diaria $: " << endl;
					cin >> tarifa;
					cout << "Ingrese Dias Laborales: " << endl;
					cin >> dias;
					listaIngenieros.push_back(new Electronico(nombre,edad,identidad,tarifa,dias));
					cout << "AGREGADO!" << endl;
				}
			}			
		}
		if(opcion == 2){
			int op = 0;
			while ((op = menuIngenieros()) != 4){
				if (op == 1){
					int pos;
					for (int i=0; i<listaIngenieros.size(); i++){
						if(Aerodinamico *a = dynamic_cast<Aerodinamico*>(listaIngenieros[i])){
                                        		cout << i << " " << listaIngenieros[i]->toString() << endl;
						}
                       			}
					cout << "Ingrese La Posicion A Modificar: " << endl;
					cin >> pos;
					string nombre,identidad;
					int edad; 
					double salarioM;
					cout << "Ingrese Nombre: " << endl;
					cin >> nombre;
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
					cout << "Ingrese Identidad: " << endl;
					cin >> identidad;
					cout << "Ingrese Salario Mensual $: " << endl;
					cin >> salarioM;
					listaIngenieros[pos]->setNombre(nombre);
					listaIngenieros[pos]->setEdad(edad);
					listaIngenieros[pos]->setIdentidad(identidad);
					dynamic_cast<Aerodinamico*>(listaIngenieros[pos])->setSalarioM(salarioM);
					cout << "MODIFICADO!" << endl;
				}
				if(op == 2){
					int pos;
					for (int i=0; i<listaIngenieros.size(); i++){
						if(Mecanico *m = dynamic_cast<Mecanico*>(listaIngenieros[i])){
                                        		cout << i << " " << listaIngenieros[i]->toString() << endl;
						}
                       			}
					cout << "Ingrese La Posicion A Modificar: " << endl;
					cin >> pos;
					string nombre,identidad;
					int edad; 
					string especializacion;
					double salarioQ;
					cout << "Ingrese Nombre: " << endl;
					cin >> nombre;
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
					cout << "Ingrese Identidad: " << endl;
					cin >> identidad;
					cout << "Ingrese Especializacion: " << endl;
					cin >> especializacion;
					cout << "Ingrese Salario Quincenal$: " << endl;
					cin >> salarioQ;
					listaIngenieros[pos]->setNombre(nombre);
					listaIngenieros[pos]->setEdad(edad);
					listaIngenieros[pos]->setIdentidad(identidad);
					dynamic_cast<Mecanico*>(listaIngenieros[pos])->setEspecializacion(especializacion);
					dynamic_cast<Mecanico*>(listaIngenieros[pos])->setSalarioQ(salarioQ);
					cout << "MODIFICADO!" << endl;
				}
				if(op == 3){
					int pos;
					for (int i=0; i<listaIngenieros.size(); i++){
						if(Electronico *e = dynamic_cast<Electronico*>(listaIngenieros[i])){
                                        		cout << i << " " << listaIngenieros[i]->toString() << endl;
						}
                       			}
					cout << "Ingrese La Posicion A Modificar: " << endl;
					cin >> pos;
					string nombre,identidad;
					int edad; 
					double tarifa;
					int dias;
					cout << "Ingrese Nombre: " << endl;
					cin >> nombre;
					cout << "Ingrese Edad: " << endl;
					cin >> edad;
					cout << "Ingrese Identidad: " << endl;
					cin >> identidad;
					cout << "Ingrese Tarifa Diaria $: " << endl;
					cin >> tarifa;
					cout << "Ingrese Dias Laborales: " << endl;
					cin >> dias;
					listaIngenieros[pos]->setNombre(nombre);
					listaIngenieros[pos]->setEdad(edad);
					listaIngenieros[pos]->setIdentidad(identidad);
					dynamic_cast<Electronico*>(listaIngenieros[pos])->setTarifa(tarifa);
					dynamic_cast<Electronico*>(listaIngenieros[pos])->setDias(dias);
					cout << "MODIFICADO!" << endl;
				}
			}
		}
		if(opcion == 3){
			int pos;
			for (int i=0; i<listaIngenieros.size(); i++){
					cout << i << " " << listaIngenieros[i]->toString() << endl;

                        }
			cout << "Ingrese La Posicion A Borrar: " << endl;
			cin >> pos;
			listaIngenieros.erase(listaIngenieros.begin()+pos);
			cout << "ELIMINADO" << endl;
		}
		if(opcion == 4){
			int pos;
			for (int i=0; i<listaIngenieros.size(); i++){
					cout << i << " " << listaIngenieros[i]->toString() << endl;

                        }
		}
		if(opcion == 5){
			int pos;
			for (int i=0; i<listaIngenieros.size(); i++){
					cout << i << " " << listaIngenieros[i]->getNombre() << " Ingresos: "  << listaIngenieros[i]->ingresos() << "$" << endl;

                        }
		}		
		
	}
	for (int i=0; i<listaIngenieros.size(); i++){
		delete listaIngenieros[i];
	}
	return 0;
}

int menu(){
	int retVal = 0;
	cout << "1. Agregar Ingenieros   " << endl;
	cout << "2. Modificar Ingenieros " << endl;
	cout << "3. Eliminar Ingenieros  " << endl;
	cout << "4. Reporte Ingenieros   " << endl;
	cout << "5. Visualizar Ingresos  " << endl;
	cout << "6. Salir.               " << endl;
	cin >> retVal;
	return retVal;
}
int menuIngenieros(){
	int retVal = 0;
	cout << "1. Aerodinamico  " << endl;
	cout << "2. Mecanico      " << endl;
	cout << "3. Electronico   " << endl;
	cout << "4. Regresar      " << endl;
	cin >> retVal;
	return retVal;
}

