#ifndef LECTEUR_H
#define LECTEUR_H
#include <iostream>

namespace reader {
	class Lecteur {
	public:
		//constructor
		Lecteur(std::string id, std::string firstname, std::string lastname);

		//getters
		std::string firstname() const;
		std::string lastname() const;
		std::string id() const;

		//method
		std::string getFullName() const;
		
	private:
		std::string _id;
		std::string _firstname;
		std::string _lastname;
};
	std::string getFullName(const Lecteur &l);
}
#endif // LECTURE_H
