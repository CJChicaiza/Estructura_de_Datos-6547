/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include "Array.cpp"

int main(int argc, char *argv[])
{
	int d;
	Array objArray;
	printf("Ingrese el tama�o del array:	");
	scanf("%d",&d);
	int *v=new int[d];
	objArray.wax(v,d);
	objArray.print(v,d);
	system("pause");
	printf("\nIngrese los valores del array:\n");
	objArray.enter(v,d);
	objArray.print(v,d);
	system("pause");
	objArray.print(v,d);
	//delete (v); // libera memoriapero en mmalloc
	free (v); //libera el espacio
	system("pause");
	return 0;
}