#include "auteur.h"
#include <iostream>
#include "livre.h"
#include "date.h"
#include <assert.h>
#include <vector>
#include <string>

Livre::Livre(std::string title, std::string language, std::string genre, std::string auteur, std::string ISBN, Date date) : _title(title), _language(language), _genre(genre), _auteur(auteur), _ISBN(ISBN), _date(date) {}


std::string Livre::title() const {
	return _title;
}

std::string Livre::language() const {
	return _language;
}

std::string Livre::genre() const {
	return _genre;
}

std::string Livre::auteur(Auteur a) const {
	return a.getFullName();
}

std::string date(Date d) const {
	return toString(d);
}

std::string Livre::ISBN() const {
	return _ISBN;
}







