#include "date.h"
#include "Emprunt.h"
#include "livre.h"
#include "auteur.h"
#include "Lecteur.h"
#include <iostream>

int main() {
// test de la classe Date
	Date a_day(2000, 3,1);
	std::cout << "a day: " << toString(a_day) << std::endl;
	std::cout << "Jour n°" << dayOfYear(a_day) << " de l'année" << std::endl;
	a_day.next();
	std::cout << "a day++: " << toString(a_day) << std::endl;
	a_day.back();
	std::cout << "a day: " << toString(a_day) << std::endl;
// test de la classe Lecteur
	Lecteur l("troth", "Tom", "Roth");
	std::cout << getFullName(l) << " ID: " << l.id() << std::endl;
// test de la classe Auteur
	Auteur a("J.K", "Rowling");
	std::cout << getFullName(a) << std::endl;
// test de la classe Livre	
	Livre livre1("Harry Potter", "French", "Roman", a, "0179279258",a_day);
	Livre livre2("Harry Potter 2", "French", "Roman", a, "0179279259",a_day);
	std::cout << livre1.auteur() << ", " << livre1.title() << std::endl;
//test de la classe Emprunt
    Emprunt e(a_day,"0123","troth");
	std::cout << e.date() << " " << e.ISBN() << " " << e.getID() << std::endl;
	return 0;
}
