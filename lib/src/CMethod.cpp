/**
	CMethod.cpp

	Purpose:
	@author
	@version
*/
#include "./../inc/CMethod.h"

#define NAME_METHOD    	"Lambda"
#define NB_ITER_DEFAUT 	5

/* Transmission de parametres  */
/* Appel du constructeur de la classe mere */
CMethod::CMethod():CTreatment(), m_nom(NAME_METHOD),m_iteration(NB_ITER_DEFAUT)
{
  m_config = new CConfig(m_nom);
}

CMethod::~ CMethod()
{
  delete m_config;
}

CMethod::CMethod(const CMethod& methodeACopier)
  : m_nom(methodeACopier.m_nom), m_iteration(methodeACopier.m_iteration)
{
  m_config = new CConfig(*(methodeACopier.m_config));
}

void CMethod::calculerCompletement(int iterations) const {
   int i=0;
   int somme=0;

   /* dummy example */
   while(i < iterations) {
       cout << m_config->data[i] << endl;
       somme+=m_config->data[i];
       i+=1;
   }
}

/* Masquage de la methode sAfficher egalement presente dans la classe CTreatment */
void CMethod::sAfficher() const {
  	cout << "Methode :" << m_nom << endl;
	cout << "Nombre iterations :" << m_iteration << endl;
}
