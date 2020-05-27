/***********************************************************************
 * Module:  Process.h
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Wednesday, May 27, 2020 1:30:47 AM
 * Purpose: Declaration of the class Process
 ***********************************************************************/

#if !defined(__TDA_Diagram_Process_h)
#define __TDA_Diagram_Process_h

class Process
{
public:
   float getNum(void);
   void setNum(float newNum);
   float getDen(void);
   void setDen(float newDen);
   Process();
   float calculate(float a, float b, float c, float d);

protected:
private:
   float num;
   float den;


};

#endif
