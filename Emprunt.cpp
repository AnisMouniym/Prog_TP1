#include <iostream>
#include "Emprunt.h"
#include "date.h"
#include "date.cpp"
#include "Lecteur.h"


Emprunt::Emprunt(Date date, std::string ISBN, std::string ID): _date(date), _ISBN(ISBN), _ID(ID) {
}

Date Emprunt::date() const {
	return _date;
}

int Emprunt::ISBN() const {
	return _ISBN;
}

Lecteur Emprunt::ID() const {
	return _ID;
}

