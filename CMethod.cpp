#include "CMethod.h"

CMethod::CMethod():CTreatment(), m_nom("Method_lambda"),m_iteration(3)
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
   while(i < iterations) {
       cout << i << endl;
       i+=1;
   }		
}

void CMethod::sePresenter() const {
  	cout << "Methode utilisee " << m_nom << endl;
	cout << "Nombre iterations " << m_iteration << endl;	
}
