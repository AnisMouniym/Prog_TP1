#include <iostream>
#include "Lecteur.h"

namespace reader {
	Lecteur::Lecteur(std::string id, std::string firstname, std::string lastname): _id(id), _firstname(firstname), _lastname(lastname) { 
}

	std::string Lecteur::id() const {
		return _id;
}

	std::string Lecteur::firstname() const {
	        return _firstname;
	}

	std::string Lecteur::lastname() const {
		return _lastname;
	}

	std::string getFullName(const Lecteur &l) {
		return l.firstname() + " " + l.lastname();
	}

	std::string getID(const Lecteur &l) {
		return l.id()
	}
}
