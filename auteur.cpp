
#include <string>
#include <auteur.h>


namespace personne {
	Auteur::Auteur(std::string firstname, std::string lastname) : _firstname(firstname), 		    _lastname(lastname) {
  }

  std:: string Auteur::firstname() const {
	return _firstname;
  }

  std::string Auteur::lastname() const {
	return _lastname;
  }

  std::string getFullName(const Auteur &p) {
	return p.firstname() + " " + p.lastname();
  }
}

