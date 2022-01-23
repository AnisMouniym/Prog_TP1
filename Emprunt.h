#ifndef EMPRUNT_H
#define EMPRUNT_H
#include <string>
#include "date.h"
class Emprunt {
public:
//constructor
    Emprunt(Date date, std::string ISBN, std::string ID);
//getters
    std::string date() const;
    std::string ISBN() const;
//method
    std::string getID() const;
private:
		Date _date;
		std::string _ISBN;
		std::string _ID;
};
#endif // EMPRUNT_H
