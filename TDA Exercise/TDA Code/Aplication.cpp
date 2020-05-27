/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include"Operation.cpp"
#include"Process.cpp"
#include"Ingreso.h"
#include <stdio.h>
#include <sstream>
#include<iostream>
using namespace std;

int main(){
	Operation objOp;
	Process objProc;
	Ingreso objEntry;
	float a,b,c,d;
	string dim;
	
	printf ("		Operacion Matematica (a/b)+(c/d)\n");
	
	printf ("Ingrese los datos a, b, c y d\n");
	
		dim=objEntry.leer("Ingrese el valor de a",2);
    	istringstream (dim) >> a;
		objOp.setNumA(a);
	

		dim=objEntry.leer("Ingrese el valor de b",2);
    	istringstream (dim) >> b;
		objOp.setDenB(b);
	

		dim=objEntry.leer("Ingrese el valor de c",2);
    	istringstream (dim) >> c;
		objOp.setNumC(c);
		
		dim=objEntry.leer("Ingrese el valor de d",2);
    	istringstream (dim) >> d;
		objOp.setDenD(d);
	
	objProc.calculate(objOp.getNumA(),objOp.getDenB(),objOp.getNumC(),objOp.getDenD());
	system("pause");
	
	return(0);
	}
