/**
	PrivateTreatment.h
	Purpose: Functions furnished in libPrivate.so

	@author
	@version
*/
#ifndef  PRIVATE_TREATMENT_H
#define  PRIVATE_TREATMENT_H

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
  extern "C" {
#endif

    int function1(int number, char* message);
    int function2(int number);

#ifdef __cplusplus
	}
#endif

#endif
