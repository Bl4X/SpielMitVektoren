#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "listensortierer.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if(argv[1] == nullptr)
    {
        cerr << "Geben Sie eine Textliste an!";
    }
    else
    {
        Listensortierer listensortiererOOP(argv[1]);
//        for(string si : listensortiererOOP.GetListe())
//        {
//            cout << si << endl;
//        }
        listensortiererOOP.ListeSortieren();
//        for(string si : listensortiererOOP.GetListe())
//        {
//            cout << si << endl;
//        }

        cout << endl << "Name der Auslagerungsdatei: ";
        string ausgelagerteDatei;
        cin >> ausgelagerteDatei;
        listensortiererOOP.InDateiAuslagern(ausgelagerteDatei);

        cout << "Liste wurde sortiert :D" << endl;
    }

    return 0;
}
