/**
	PrivateTreatment.cpp
	Purpose:

	@author
	@version
*/
#include "./../inc/PrivateTreatment.h"
#include "./../inc/CTreatment.h"
#include "./../inc/CMethod.h"

/**
	function1

	@param
	@return
 */
int function1(int number, char* message)
{
  CTreatment treat1;
  double     val = 0.0f;
  int        ret = 0;

  treat1.SetMeasure(3.14);
  val = treat1.GetMeasure();
  treat1.~CTreatment();

  ret = (int)(val*100);
#ifdef DEBUG
  printf("\n[ %s ] : retourne %d\n",__FUNCTION__,ret);
#endif
  return(ret);
}

/**
	function2

	@param
	@return
*/
int function2(int number)
{
  CTreatment* objetBase   = new CTreatment();
  CMethod*    objetDerive = new CMethod();

  /* constructeur par copie */
  CMethod*     autreMethode = objetDerive;

  /* on n'affecte pas le derive à la base. on substitue un pointeur.   */
  /* Les objets restent comme ils sont dans la memoire. on ne fait     */
  /* que diriger le pointeur objetBase vers les attributs et methodes  */
  /* hérités uniquement.                                               */
  objetBase = objetDerive;
  objetDerive->calculerCompletement();
  objetDerive->sAfficher();

  CTreatment treat2;
  double val = 0.0f;
  int    ret = 0;

  treat2.SetMeasure(3.14,0.1);
  val = treat2.GetMeasure();
  treat2.~CTreatment();

  ret = (int)(val*100);
#ifdef DEBUG
  printf("\n[ %s ] retourne %d\n",__FUNCTION__,ret);
#endif
  return(ret);
}

/**
 	DLL entry point 
	@param	argc, int
	@param	argv, char**
	@return
*/
int main(int argc, char** argv){
   return(0);
}
