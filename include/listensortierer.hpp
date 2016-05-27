#ifndef LISTENSORTIERER_HPP
#define LISTENSORTIERER_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Listensortierer
{
    public:
        // Konstruktor
        Listensortierer(string const &woerterliste);

        // Get und Set
        vector<string> &GetListe();
        void InListeSchreiben(string const &wort);

        // Funktionen
        void ListeSortieren();

        ~Listensortierer();
    protected:
    private:
        vector<string> liste;
};

#endif
