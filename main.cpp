#include "date.h"
#include "Lecteur.h"
#include "auteur.h"
#include <iostream>

int main() {
	Date a_day(2000, 2, 29);
	std::cout << "a day: " << toString(a_day) << std::endl;
	std::cout << "day # " << dayOfYear(a_day) << std::endl;
	a_day.next();
	std::cout << "a day++: " << toString(a_day) << std::endl;
	a_day.back();
	std::cout << "a day: " << toString(a_day) << std::endl;

	Lecteur l("bg", "Tom", "Roth");
	std::cout << getFullName(l) << " le " << l.id() << std::endl;

	Auteur a("Adolf", "H");
	std::cout << getFullName(a) << std::endl;
	return 0;
}
