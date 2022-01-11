#include "date.h"
#include "Lecteur.h"
#include <iostream>

int main() {
	Date a_day(2001,12,31);
	std::cout << "a day: " << toString(a_day) << std::endl;
	std::cout << "day #" << dayOfYear(a_day) << std::endl;
	a_day.next();
	std::cout << "a day++: " << toString(a_day) << std::endl;
	a_day.back();
	std::cout << "a day: " << toString(a_day) << std::endl;

	Livre livre("Harry pute","francais","roman",a,a_day,
	
	return 0;
}
