/***********************************************************************
 * Module:  Operation.h
 * Author:  user
 * Modified: Friday, June 19, 2020 11:58:15 AM
 * Purpose: Declaration of the class Operation
 ***********************************************************************/

#if !defined(__TDA_Diagram_Operation_h)
#define __TDA_Diagram_Operation_h

class Process;

class Operation
{
public:
   float getNumA(void);
   void setNumA(float newNumA);
   float getDenB(void);
   void setDenB(float newDenB);
   float getNumC(void);
   void setNumC(float newNumC);
   float getDenD(void);
   void setDenD(float newDenD);
   Operation();

   Process* process;

protected:
private:
   float numA;
   float denB;
   float numC;
   float denD;


};

#endif
