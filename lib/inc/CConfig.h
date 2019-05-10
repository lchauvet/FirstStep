#ifndef CCONFIG_H
#define CCONFIG_H

#include <iostream>
#include <string>

using namespace std;

class CConfig {
	private:
		std::string m_name;
		static int  compteur;
	public:
		static int data[7];
		CConfig(string name);
		~CConfig();
		int nombreInstances();
};

#endif
