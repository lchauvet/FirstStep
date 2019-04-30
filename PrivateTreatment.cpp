#include "PrivateTreatment.h"
#include "CTreatment.h"
#include "CMethod.h"

/***************************************************
 * @function : function1
 ***************************************************/
int function1(int number, char* message)
{
  CTreatment treat1;
  double     val = 0.0f;
  int        ret = 0;

  treat1.SetMeasure(3.14);
  val = treat1.GetMeasure();
  treat1.~CTreatment();

  ret = (int)(val*100);
  printf("\n%s %d\n","[DEBUG]",ret);
  return(ret);
}

/************************************************
 * @function : function2
 ************************************************/
int function2(int number) 
{
  /* ajout */
  CTreatment* objetMere  = new CTreatment();
  CMethod*    objetFille = new CMethod();
  objetMere = objetFille;
  objetMere->sePresenter();
  objetFille->sePresenter();
  objetFille->calculerCompletement(3);

//  char* result = objetMere->Crypto(10);
//  cout << "Resultat " << result << endl;

  CTreatment treat2;
  double val = 0.0f;
  int    ret = 0;

  treat2.SetMeasure(3.14,0.1);
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
