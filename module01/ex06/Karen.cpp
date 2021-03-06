#include "Karen.hpp"

Karen::Karen() {
}

Karen::~Karen() {
}

void Karen::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(str level) {
	typedef void(Karen::*FuncPtr)();

	FuncPtr fs[4] = {
		&Karen::debug, &Karen::info, &Karen::warning, &Karen::error
	};
	str levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; levels[i] != level && i < 4; i++);
	switch(i)
	{
		case (0):
			(this->*fs[i++])();
		case (1):
			(this->*fs[i++])();
		case (2):
			(this->*fs[i++])();
		case (3):
			(this->*fs[i++])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}