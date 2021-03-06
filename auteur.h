#ifndef AUTEUR_H
#define AUTEUR_H
#include <iostream>

class Auteur {
public:
	Auteur(std::string firstname, std::string lastname);
	std::string firstname() const;
	std::string lastname() const;
	std::string getFullName() const;

private:
	std::string _firstname;
	std::string _lastname;
};

std::string getFullName(const Auteur &a);

#endif // AUTEUR_H
