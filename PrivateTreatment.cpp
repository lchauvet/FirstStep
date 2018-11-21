#include "PrivateTreatment.h"
#include "CTreatment.h"
#include "CreateException.h"

int function1(double number, char* message)
{
  CTreatment treat1;
  double     val = 0.0f;
  int        ret = 0;

  treat1.SetMeasure(number);
  val = treat1.GetMeasure();
  treat1.~CTreatment();

  /* test */
  if (val!=number)
     throw new CreateException(ERROR_UNIT_TEST,"Get/Set");

  /* */
  ret = (int)(val*100);
  printf("\n%s %d\n","[DEBUG]",ret);
  return(ret);
}

int function2(double number, double precision)
{
  CTreatment treat2;
  double val = 0.0f;
  int    ret = 0;

  treat2.SetMeasure(number,precision);
  val = treat2.GetMeasure();
  treat2.~CTreatment();

  ret = (int)(val*100);
  printf("\n%s %d\n","[DEBUG]",ret);
  return(ret);
}

/* Main point d'entrée */
int main(int argc, char** argv){
   CTreatment treat3;
   char* result = treat3.Crypto(10);
   printf("\n[DEBUG] crypto :%s\n",result);
   treat3.~CTreatment();
   return(0);
}
