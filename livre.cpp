#include "auteur.h"
#include <iostream>
#include "livre.h"
#include "date.h"
#include <assert.h>
#include <vector>
#include <string>

Livre::Livre(std::string title, std::string language, std::string genre, std::string auteur, std::string ISBN, Date::Date date) _title(title), _language(language), _genre(genre), _auteur(auteur), _ISBN(ISBN), _date(date) {} 


std::string Livre::title() const {
	return _title;
}

std::string Livre::language() const {
	return _language;
}

std::string Livre::genre() const {
	return _genre;
}

std::string livre::auteur(Auteur& a) const{
	return Auteur.getFullName();
}

Date::Date date() const; {
	return _date;
}

std::string Livre::ISBN() {
	return _ISBN;
}

	



