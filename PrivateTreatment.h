#ifndef  PRIVATE_TREATMENT_H
#define  PRIVATE_TREATMENT_H

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
  extern "C" {
#endif
   /***
    * @function    : function1
    * @Description : Specific treatment (multiply by hundred)
    * @parameters  : number, type double
    *                message, type char*  (not used)
    * @return      : result, type integer
    */
    int function1(double number, char* message);

   /***
    * @function    : function2
    * @Description : Specific treatment (multiply by hundred)
    * @parameters  : number, type double
    *                precision, type double
    * @return      : result, type integer
    */
    int function2(double number, double precision);

#ifdef __cplusplus
	}
#endif

#endif
