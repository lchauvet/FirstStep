#ifndef CTREATMENT_H
#define CTREATMENT_H
 
#include <iostream>

using namespace std;

class CTreatment {
private:
     double measure;
     int    num;
     double random;
public:
     CTreatment();
     ~CTreatment();
     double GetMeasure();
     void   SetMeasure(double mes);
     /*! surcharge */
     void   SetMeasure(double mes, double precision);
     char*  Crypto(int size);

     void  sePresenter() const;
};

#endif
