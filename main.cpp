#include "date.h"
#include "Lecteur.h"
#include "auteur.h"
#include "livre.h"
#include <iostream>

int main() {
	Date a_day(2000, 3,1);
	std::cout << "a day: " << toString(a_day) << std::endl;
	std::cout << "Jour n°" << dayOfYear(a_day) << " de l'année" << std::endl;
	a_day.next();
	std::cout << "a day++: " << toString(a_day) << std::endl;
	a_day.back();
	std::cout << "a day: " << toString(a_day) << std::endl;

	Lecteur l("troth", "Tom", "Roth");
	std::cout << getFullName(l) << " ID: " << l.id() << std::endl;

	Auteur a("J.K", "Rowling");
	std::cout << getFullName(a) << std::endl;
	
	
	return 0;
}
