

#include "livre.h"

std::string Livre::title() const {
	return _title;
}

std::string Livre::language() const {
	return _language;
}

std::string Livre::genre() const {
	return _genre;
}

std::string Auteur::auteur() const;

std::string Date::toString(a_day) const;

int Livre::ISBN() const{
	return _ISBN;
}


