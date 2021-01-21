#include <iostream>
#include <string>
#include <vector>

using namespace std;

void dodajAkta(){

}

void usunAkta(){

}

void zmienDane(){

}

void wyszukaj(){

}

void zapiszPlik(){

}

void wczytajPlik(){

}

int main() {
    struct dane {
        char numerSprawy[50];
        string typ;
        string dataWszczecia;
        string dataZakonczenia;
        char oficerProwadzacy[256];
        string oskrazony;
        string poszkodowany;
        string swiadek;
    };

    vector<dane> dane1;

    int wybor;

    cout << "Witaj w programie do zarzadzania archiwum kryminalnym!\nCo chcesz zrobic? " << endl;
    cout << "1 - Dodanie akt" << endl;
    cout << "2 - Usuniecie akt" << endl;
    cout << "3 - Zmiana danych akt" << endl;
    cout << "4 - Wyszukiwanie/filtrowanie po numerze lub typie" << endl;
    cout << "5 - " << endl;
    cout << "6 - Zapisanie bazy danych na dysku w postaci pliku" << endl;
    cout << "7 - Wczytanie zapisanej bazy danych ze wskazanego pliku" << endl;
    cin >> wybor;

    switch (wybor){
        case 1:
            dodajAkta();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
    }
    return 0;
}
