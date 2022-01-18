#include "auteur.h"
#include <iostream>
#include "livre.h"
#include "date.h"
#include <assert.h>
#include "auteur.h"
#include "date.h"
#include <iostream>
#include <string>

Livre::Livre(std::string title, std::string language, std::string genre, Auteur auteur, std::string ISBN, Date date) : _title(title), _language(language), _genre(genre), _auteur(auteur), _ISBN(ISBN), _date(date) {}


std::string Livre::title() const {
	return _title;
}

std::string Livre::language() const {
	return _language;
}

std::string Livre::genre() const {
	return _genre;
}

std::string Livre::auteur() const {
	return getFullName(_auteur);
}

std::string Livre::ISBN() const {
	return _ISBN;
}

std::string Livre::date() const {
	return toString(_date);
}






