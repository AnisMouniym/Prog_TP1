#include "Bibliothèque.h"
#include "Lecteur.h"
#include "livre.h"
#include "auteur.h"
#include "Emprunt.h"
#include "date.h"
#include <vector>
#include <iostream>
#include <ctime>
Library() {}

    vector<Livre> Library::getBookList() {return _BookList;}

    vector<Emprunt> Library::getBorrowList() {return _BorrowList;}

    vector<Lecteur> Library::getReaderList() {return _ReaderList;}

    vector<Auteur> Library::getAuthorList() {return _AuthorList;}

    void Library::addBook(Livre livre)
    {
        _BookList.push_back(livre);
        _AllBooks.push_back(livre);
    }

    void Library::addReader(Lecteur lecteur)
    {
        _ReaderList.push_back(lecteur);
    }

    void Library::addExtReader()
    {
        string ReaderName, ReaderFirstname, ReaderID;

        cout << "Nom du lecteur : " << endl;
        cin >> ReaderName;

        cout << "Prénom du lecteur : " << endl;
        cin >> ReaderFirstName;

        cout << "Id du lecteur : " << endl;
        cin >> ReaderID;
        for(int i=0 ; i < _ReaderList.size() ; i++)
        {
            if (_ReaderList[i].getID()==ReaderID)
            {
                cout << "Lecteur présent." << endl;
                return;
            }
        }

        Lecteur newReader(ReaderID, ReaderName, ReaderFirstname);
        _ReaderList.push_back(newReader);


        cout<<"Lecteur ajoutée"<<endl;
        cout << endl;
    }


    void Library::addAuthor(Auteur auteur)
    {
        _AuthorList.push_back(auteur);
    }

    bool Library::BookInLibrary(Livre &TheBook)
    {
        for(int i=0 ; i < _BookList.size() ; i++)
        {
            if (_BookList[i]==TheBook)
            {
                cout << "Livre dans la bibliothèque." << endl;
                return true;
            }
        }
        return false;
    }


    void Library::ReturnBook(Livre &ReturnBook, Lecteur &lecteur)
    {
        for(int i=_BookList.begin(); i!=_BookList.end(); i++)
        {
            if(i->ISBN()==ReturnBook.ISBN())
            {
                cout<<"Livre non emprunter."<<endl;
                return ;
            }
        }

        for(int j=0; j<ReturnBook.getIdBorrowers().size(); j++)
        {
            if (ReturnBook.getIdBorrowers()[j] == lecteur.getID())
            {
                for(int k=0;k<lecteur.getBorrowedISBN().size(); k++)
                {
                    if(lecteur.getBorrowedISBN()[k] == ReturnBook.ISBN())
                    {
                        _BookList.push_back(ReturnBook);
                        _BorrowList.erase(_BorrowList.begin());
                        return;
                    }

                }
            }

        }

    }


    void Library::BorrowBook(Livre &livre, Lecteur &lecteur)
    {
        time_t t=time(NULL);
        tm* timePtr= localtime(&t);
        for(int i=0; i<_BookList.size(); i++)
        {
            if(_BookList[i].ISBN()==livre.ISBN())
            {
                Date date(timePtr->tm_mon+1, timePtr->tm_mday, timePtr->tm_year+1900);
                _BookList.erase(_BookList.begin()+i);
                livre.addBorrower(lecteur.getID());
                Emprunt e(date, livre, lecteur);
                _BorrowList.push_back(e);
                return ;
            }
        }

        cout<<"Livre non trouvé"<<endl;

    }


    void Library::getBookList()
    {
        cout << "Liste des livres : " << endl;
        cout << endl;
        for (int i=0; i< _AllBooks.size(); i++)
        {
            cout<<_AllBooks[i]<<" "<<endl;
        }
    }

    void Library::getReaderList()
    { 
        cout << "Liste des lecteurs : " << endl;
        for (int i=0; i<_ReaderList.size(); i++)
        {
            cout<<_ReaderList[i]<<" "<<endl;
        }
    }

    void Library::getAuthorList()
    {
        cout << "Liste des auteurs : " << endl;
        for (int i=0; i<_AuthorList.size(); i++)
        {
            cout<<_AuthorList[i]<<" "<<endl;
        }
    }

    void Library::FindBookByAuthor()
    {
        Auteur author;

        for(int i=0; i<_AllBooks.size(); i++)
        {
            if (_AllBooks[i].firstname() == author.firstname() && _AllBooks[i].lastname() == author.lastname())
            {
                cout << "Livre " << i+1 << " : ";
                _AllBooks[i].getTitle();
            }
        }
        cout << endl;
    }

    void Library::FindBorrowedBook()
    {
        cout << "Liste d'emprunts : " << endl;
        for (int i=0; i<_BorrowList.size(); i++)
        {
            cout<<_BorrowList[i]<<" "<<endl;
        }

        float total = _BookList.size()+_BorrowList.size();
        float nombre = _BorrowList.size();
        float taux = nombre/total;
        cout<< "Taux d'emprunt : "<<taux*100<<" %"<<endl;


    }

    void Library::getTitle(std::string ISBN)
    {
        for(int i=0; i<_AllBooks.size(); i++)
        {
            if(_AllBooks[i].ISBN()==ISBN)
            {
                cout<<_AllBooks[i].title()<<endl;
            }

        }
    }

    void Library::FindBookByReader()
    {
        string id;
        cout<<"ID Lecteur: "<<endl;
        cin>>id;

        for(int i=0; i<_BorrowList.size(); i++)
        {
            if (_BorrowList[i].getID() == id)
            {
                cout << "Livre " << i+1 << " : ";
                getTitle(_BorrowList[i].ISBN());
            }

        }
    }
}