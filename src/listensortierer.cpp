#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "listensortierer.hpp"

using namespace std;

// öffnet die Datei und fügt Zeilenweise die Datensätze in den Vektor Liste
Listensortierer::Listensortierer(string const &woerterliste)
{
    ifstream datei;
    datei.open(woerterliste, ios_base::in);

    if(!datei)
        throw "Eingabe-Datei kann nicht geöffnet werden";
    else
    {
        while(!datei.eof())
        {
            string wort;
            getline(datei, wort);
            Listensortierer::InListeSchreiben(wort);
        }
        datei.close();
    }
}

// zeigt den Vektor an
vector<string> &Listensortierer::GetListe() {return Listensortierer::liste;}

// fügt ein Wort in den Vektor Liste
void Listensortierer::InListeSchreiben(string const &wort)
{
    Listensortierer::liste.push_back(wort);
}

// sortiert den Vektor alphanomerisch
void Listensortierer::ListeSortieren()
{
    sort(Listensortierer::GetListe().begin(), Listensortierer::GetListe().end());
}

Listensortierer::~Listensortierer(){};
