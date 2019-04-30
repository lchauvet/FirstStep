#ifndef CCONFIG_H
#define CCONFIG_H

#include <iostream>
#include <string>

using namespace std;

class CConfig {
	private:
		std::string m_name;
		static const char data[7];
	public:
		CConfig(string name);
		~CConfig();
};

#endif
