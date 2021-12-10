#ifndef EMPRUNT_H
#define EMPRUNT_H
#include <string>
#include "date.h"
#include "livre.h"
#include "Lecteur.h"
namespace book {
	class Emprunt {
	public:
		//constructor
		Emprunt(Date date, int isbn, reader::Lecteur l);

		//getters
		Date date() const;
		int ISBN() const;

		//method
		std::string getID() const;
		
	private:
		Date _date;
		int _isbn;
		reader::Lecteur _l;
};
#endif // EMPRUNT_H
