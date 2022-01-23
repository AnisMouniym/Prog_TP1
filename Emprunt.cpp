#include <iostream>
#include "Emprunt.h"
#include "date.h"


Emprunt::Emprunt(Date date, std::string ISBN, std::string ID): _date(date), _ISBN(ISBN), _ID(ID) {
}

std::string Emprunt::date() const {
	return toString(_date);
}

std::string Emprunt::ISBN() const {
	return _ISBN;
}

std::string Emprunt::getID() const {
	return _ID;
}

