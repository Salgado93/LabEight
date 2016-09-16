#include "ingeniero.h"
#include "aerodinamico.h"
#include "mecanico.h"
#include "electronico.h"
#include <iostream>
#include <sstream>
#include <vector>


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
					cout << "Ingrese Salario Mensual $; " << endl;
					cin >> salarioM;
					listaIngenieros.push_back(new Aerodinamico(nombre,edad,identidad,salarioM));
					cout << "AGREGADO!" << endl;
					
				}
				if(op == 2){

				}
				if(op == 3){

				}
			}			
		}
		if(opcion == 2){
			int op = 0;
			while ((op = menuIngenieros()) != 4){
				if (op == 1){

				}
				if(op == 2){

				}
				if(op == 3){

				}
			}
		}
		
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
	cout << "4. Salir         " << endl;
	cin >> retVal;
	return retVal;
}
