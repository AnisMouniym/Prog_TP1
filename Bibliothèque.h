#include <iostream>
#include <vector>
#include "livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "auteur.h"
#include "date.h"
#include <ctime>
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

class Library {
public:
    Library();
    std::vector<Livre> getBookList() ;
    std::vector<Lecteur> getReaderList() ;
    std::vector<Emprunt> getBorrowList() ;
    std::vector<Auteur> getAuthorList() ;
    void addAuteur(Auteur auteur) ;
    void addLivre(Livre livre) ;
    void addReader(Lecteur lecteur) ;
    void getBookList();
    void getAuthorList();
    void getReaderList();
    void BorrowBook(Livre &BorrowB, Lecteur &lecteur);
    bool BookInLibrary(Livre& TheBook);
    void ReturnBook(Livre &ReturnBook, Lecteur &lecteur);
    void FindBooksByAuthor();
    void FindBorrowedBook();
    void FindBookByReader();
    void getBookTitle(std::string ISBN);
    void addExtReader();

private:
    std::vector<Livre> _BookList;
    std::vector<Lecteur> _ReaderList;
    std::vector<Emprunt> _BorrowList;
    std::vector<Auteur> _AuthorList;
    std::vector<Livre> _AllBooks;
};


#endif //BIBLIOTHEQUE_H