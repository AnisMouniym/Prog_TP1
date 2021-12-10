
#include "date.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include <iostream>

int main() {
	Date a_day(2000,12,31);
	std::cout << "a day: " << toString(a_day) << std::endl;
	std::cout << "day #" << dayOfYear(a_day) << std::endl;
	a_day.next();
	std::cout << "a day++: " << toString(a_day) << std::endl;
	a_day.back();
	std::cout << "a day: " << toString(a_day) << std::endl;
	
	reader::Lecteur l("le noir","Anis","Mouniym");
	std::string lecteur=l.id();
	std::cout << "id: " << lecteur << std::endl;
	std::cout << "Reader : " << getFullName(l) << std::endl;
	
	Emprunt e(a_day,15,l);
	std::cout << "le livre " << e.ISBN() << "a été emprunté le " << toString(a_day) << "par " << l.id << std::endl;
	return 0;
}
