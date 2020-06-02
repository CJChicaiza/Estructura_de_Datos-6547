/***********************************************************************
 * Module:  Array.cpp
 * Author:  Chicaiza Jaya Cristopher Jennsy 
 * Modified: Tuesday, June 2, 2020 8:56:55 AM
 * Purpose: Implementation of the class Array
 ***********************************************************************/

#include "Array.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Array::Array()
// Purpose:    Implementation of Array::Array()
// Return:     
////////////////////////////////////////////////////////////////////////

Array::Array()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::wax(int * v, int dim)
// Purpose:    Implementation of Array::wax()
// Parameters:
// - v
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Array::wax(int * v, int dim)
{
   for(int i=0;i<dim;i++)
	*(v+i)=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::print(int * v, int dim)
// Purpose:    Implementation of Array::print()
// Parameters:
// - v
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Array::print(int * v, int dim)
{
   for(int i=0;i<dim;i++){
	printf("%d,",*(&(*v)));
	*(v++);
//	cout<<v[i]<<", ";
	}
	printf("\n");
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::enter(int * v, int dim)
// Purpose:    Implementation of Array::enter()
// Parameters:
// - v
// - dim
// Return:     void
////////////////////////////////////////////////////////////////////////

void Array::enter(int * v, int dim)
{
   for(int i=0;i<dim;i++){
		cout<<"Valor "<<i+1<<endl;
	//	scanf("%d",*(&v)+i);
		cin>>*(v+i);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::mcm(int * v, int dim)
// Purpose:    Implementation of Array::mcm()
// Parameters:
// - v
// - dim
// Return:     int
////////////////////////////////////////////////////////////////////////

int Array::mcm(int * v, int dim)
{

   
}

////////////////////////////////////////////////////////////////////////
// Name:       Array::mcd(int * v, int dim)
// Purpose:    Implementation of Array::mcd()
// Parameters:
// - v
// - dim
// Return:     int
////////////////////////////////////////////////////////////////////////

int Array::mcd(int * v, int dim)
{
    int num, res, mcd;
 	for (int i=0;i<dim;i++){
        if (i == 1) {
            mcd = *(v+i);
 
        } else {
            do {
                res = mcd % *(v+i);
                mcd = *(v+i);
                *(v+i) = res;
            } while (res != 0);
        }
	}
	return mcd;
}
