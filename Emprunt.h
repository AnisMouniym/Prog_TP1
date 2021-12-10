#ifndef EMPRUNT_H
#define EMPRUNT_H
#include <string>
class Emprunt {
public:
	//constructor
	Emprunt(date::Date d, Livre::ISBN() isbn, std::string id);

	//getters
	std::string date() const;
	std::string ISBN() const;
	std::string id() const;
		
private:
	date::Date _date;
	livre::Livre _ISBN;
	std::string _id;
	
};
#endif // EMPRUNT_H
