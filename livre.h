#include <iostream>
#include <vector>
#include "auteur.h"
#include "date.h"
#ifndef LIVRE_H
#define LIVRE_H

class Livre {
public:
	Livre(std::string title, std::string language, std::string genre, std::string auteur, std::string ISBN, date::Date);
	std::string title() const;
	std::string language() const;
	std::string genre() const;
	std::string auteur(Auteur::Auteur a) const;
	std::string ISBN() const;
	Date::Date date() const;

private:
	std::string _title;
	std::string _language;
	std::string _genre;
	std::string _auteur;
	std::string _ISBN;
	Date::Date _date;

};

std::string toString(Livre l);

#endif // LIVRE_H
	
	
