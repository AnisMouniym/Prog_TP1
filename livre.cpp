
#include <iostream>
#include "livre.h"
#include "date.h"
#include <assert.h>
#include <vector>

namespace livre {
	Livre::Livre(std::string title, std::string language, std::string genre, std::string auteur, int ISBN, date::Date date) {
	_title = title;
	_language = language;
	_genre = genre;
	_ISBN = ISBN;
	_date = date;

}

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

date::Date date() const;

int Livre::ISBN() const{
	return _ISBN;
}


std::ostream& operator<<(std::ostream& os, const Livre& livre){
	os << "Titre : " <<livre.title() << std::endl;
	os << "Langue : " <<livre.language() << std::endl;
	os << "Genre : " <<livre.genre() << std::endl;
	os << "Auteur : " <<livre.auteur() << std::endl;
	os << "Date de publication : " <<livre.date() << std::endl;
	os << "ISBN : " <<livre.ISBN()<< std::endl;
	return os;
}
}
	



