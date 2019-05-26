/**
	CTreatment.cpp
	Purpose:

	@author
	@version
*/
#include "./../inc/CTreatment.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
	Constructor, that initializes the attributes
	@param
	@return
 */
CTreatment::CTreatment() {
   measure = 0.0f;
   num     = 0;
   random  = 0.001;
}

/**
	Destructor
	@param
	@return
*/
CTreatment::~CTreatment() {
   measure = 0.0f;
   random  = 0.0;
}

/**
	Accessor Get
	@param
	@return
*/
double CTreatment::GetMeasure() {
   return(measure);
}

/**
	Accessor Set
	@param
	@return
*/
void CTreatment::SetMeasure(double mes) {
   measure = mes;
}

/**
	Accessor Set, with overload
	@param
	@return
*/
void CTreatment::SetMeasure(double mes, double precision) {
   measure = mes + (precision/2);
}

/**
	Method Crypto
	@param
	@return
*/
char* CTreatment::Crypto(int size) {
   char* destination;

   /* choose a random seed based on current time */
   srand((unsigned)time(NULL));
   while(size--)
	*destination++ = rand();
   return(destination);
}

/**
	sAfficher display attribute value
	@param
	@return
*/
void CTreatment::sAfficher() const {
    cout << "Treatment" << endl;
}
