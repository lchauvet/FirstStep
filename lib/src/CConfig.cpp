/**
	CConfig.cpp
	Purpose: Configuration

	@author
	@version
*/
#include "./../inc/CConfig.h"

int  CConfig::compteur = 0;  /* on initialise notre compteur à zero */
int  CConfig::data[7]  = {40000,40001,40002,40003,40004,40005,40006};

CConfig::CConfig(string name)
{
   compteur+=1;
}

CConfig::~CConfig()
{
   compteur-=1;
}

int CConfig::nombreInstances()
{
   return(compteur);
}
