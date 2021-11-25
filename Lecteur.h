#ifndef LECTEUR_H
#define LECTEUR_H
#include <string>

namespace reader {
	class Lecteur {
	public:
		Lecteur(std::string id, std::string firstname, std::string lastname);
		std::string id() const;
		std::string firstname() const;
		std::string lastname() const;
		std::string getFullName() const;
		std::string getID() const;
	private:
		std::string _id();
		std::string _firstname();
		std::string _lastname();
};
};
#endif // LECTURE_H
