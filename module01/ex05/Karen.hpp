#ifndef __KAREN_HPP__
#define __KAREN_HPP__
#include <iostream>
#define str std::string

class Karen
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Karen();
	~Karen();
	void complain(str level);
};


#endif