#include "CTreatment.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//======================================================================
// Constructor, that initializes the attributes

CTreatment::CTreatment() {
   measure = 0.0f;
   num     = 0;
   random  = 0.001;
}

//======================================================================
// Destructor

CTreatment::~CTreatment() {
   measure = 0.0f;
   random  = 0.0;
}

//======================================================================
// Accessor Get

double CTreatment::GetMeasure() {
   return(measure);
}

//======================================================================
// Accessor Set

void CTreatment::SetMeasure(double mes) {
   measure = mes;
}

//======================================================================
// Accessor Set, with overload

void CTreatment::SetMeasure(double mes, double precision) {
   measure = mes + (precision/2);
}

//======================================================================
// Method

char* CTreatment::Crypto(int size) {
   char* destination;

   /* choose a random seed based on current time */
   srand((unsigned)time(NULL));
   while(size--)
	*destination++ = rand();
   return(destination);
}

void CTreatment::sePresenter() const {
    cout << "Treatment" << endl;
}
