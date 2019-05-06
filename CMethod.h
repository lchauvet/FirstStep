#ifndef CMETHOD_H
#define CMETHOD_H

#include <iostream>
#include <string>
#include "CTreatment.h"
#include "CConfig.h"

using namespace std;

/* La classe CMethod derive de CTreatment. Elle recupere toutes ses proprietes et ses methodes */
class CMethod : public CTreatment {
   private:
	std::string 	m_nom;
	int 		m_iteration;
	CConfig*	m_config;

   public:
	CMethod();
	~CMethod();
	/* constructeur par copie */
	CMethod(const CMethod& methodeACopier);
	void calculerCompletement(int iterations = 5) const;
	void sAfficher() const;
};

#endif
