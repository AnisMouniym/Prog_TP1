#include <iostream>
#include "Emprunt.h"
#include "date.h"
#include "date.cpp"


Emprunt::Emprunt(Date date, int isbn, reader::Lecteur l): _date(date), _isbn(isbn), _l(l) {
}

Date Emprunt::date() const {
	return _date;
}

int Emprunt::ISBN() const {
	return _isbn;
}

Lecteur Emprunt::getID() const {
	return l.id();
}


