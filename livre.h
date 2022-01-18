#include <iostream>
#include "auteur.h"
#include "date.h"
#ifndef LIVRE_H
#define LIVRE_H

class Livre {
public:
	Livre(std::string title, std::string language, std::string genre, Auteur auteur, std::string ISBN, Date date);
	std::string title() const;
	std::string language() const;
	std::string genre() const;
	std::string auteur() const;
	std::string ISBN() const;
	std::string date() const;

private:
	std::string _title;
	std::string _language;
	std::string _genre;
	Auteur _auteur;
	std::string _ISBN;
	Date _date;

};


#endif // LIVRE_H
