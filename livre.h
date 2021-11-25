
 #include <iostream>
 #include <vector>
 #include "auteur.h"
 #include "date.h"

 #ifndef LIVRE_H
 #define LIVRE_H

namespace livre {
  class Livre {
  public:
	Livre(std::string title, std::string language, std::string genre, std::string auteur, int ISBN, date::Date);
	std::string title() const;
	std::string language() const;
	std::string genre() const;
	std::string auteur() const;
	int ISBN() const;
	date::Date date() const;

private:

 std::string _title;
 std::string _language;
 std::string _genre;
 std::string _auteur;
 int _ISBN;
 date::Date _date;

};

	std::string toString(Livre l);
	std::ostream& operator<<(std::ostream& os, const Livre& livre);


}

	
	
