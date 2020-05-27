/***********************************************************************
 * Module:  Process.cpp
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Wednesday, May 27, 2020 1:30:47 AM
 * Purpose: Implementation of the class Process
 ***********************************************************************/

#include "Process.h"
#include <stdio.h>
#include<iostream>
#include <math.h>
#include<stdlib.h>
#include<conio.h>
#include <stdio.h>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Process::calculate(float a, float b, float c, float d)
// Purpose:    Implementation of Process::calculate()
// Parameters:
// - a
// - b
// - c
// - d
// Return:     float
////////////////////////////////////////////////////////////////////////

float Process::calculate(float a, float b, float c, float d)
{
	Process anws;
		anws.setNum((a*d)+(b*c));
		anws.setDen(b*d);
		cout <<"El resultado es	"<<anws.getNum()<<"/"<<anws.getDen()<<endl;

}

////////////////////////////////////////////////////////////////////////
// Name:       Process::getNum()
// Purpose:    Implementation of Process::getNum()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Process::getNum(void)
{
   return num;
}

////////////////////////////////////////////////////////////////////////
// Name:       Process::setNum(float newNum)
// Purpose:    Implementation of Process::setNum()
// Parameters:
// - newNum
// Return:     void
////////////////////////////////////////////////////////////////////////

void Process::setNum(float newNum)
{
   num = newNum;
}

////////////////////////////////////////////////////////////////////////
// Name:       Process::getDen()
// Purpose:    Implementation of Process::getDen()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Process::getDen(void)
{
   return den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Process::setDen(float newDen)
// Purpose:    Implementation of Process::setDen()
// Parameters:
// - newDen
// Return:     void
////////////////////////////////////////////////////////////////////////

void Process::setDen(float newDen)
{
   den = newDen;
}

////////////////////////////////////////////////////////////////////////
// Name:       Process::Process()
// Purpose:    Implementation of Process::Process()
// Return:     
////////////////////////////////////////////////////////////////////////

Process::Process()
{
}


