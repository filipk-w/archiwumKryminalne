#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct dane {
    char numerSprawy[50];
    string typ;
    string dataWszczecia;
    string dataZakonczenia;
    char oficerProwadzacy[256];
    string oskarzony;
    string poszkodowany;
    string swiadek;
};

void dodajAkta(vector<dane> &baza) {
    dane record;
    cout << "Podaj numer sprawy: ";
    cin >> record.numerSprawy;
    cout << "Podaj typ sprawy: ";
    cin >> record.typ;
    cout << "Podaj date wszczecia (DD.MM.RRRR): ";
    cin >> record.dataWszczecia;
    cout << "Podaj date zakonczenia (DD.MM.RRRR): ";
    cin >> record.dataZakonczenia;
    cout << "Podaj oficera prowadzacego (ImieNazwisko): ";
    cin >> record.oficerProwadzacy;
    cout << "Podaj oskarzonego (ImieNazwisko): ";
    cin >> record.oskarzony;
    cout << "Podaj poszkodowanego (ImieNazwisko): ";
    cin >> record.poszkodowany;
    cout << "Podaj swiadka (ImieNazwisko): ";
    cin >> record.swiadek;
    baza.push_back(record);
}

void usunAkta(vector<dane> &baza){
    char wybor[50]
    cout << "Podaj numer sprawy, ktora chcesz usunac: ";
    cin >> wybor;
    for (int i = 0; i < baza.size(); i++){
        for (int j = 0; j<50; j++){
                if baza[i].

        }
    }
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
    char wybor[50]

    vector<dane> baza;

    int wybor;
    do {
        cout << "Witaj w programie do zarzadzania archiwum kryminalnym!\nCo chcesz zrobic? " << endl;
        cout << "1 - Dodanie akt" << endl;
        cout << "2 - Usuniecie akt" << endl;
        cout << "3 - Zmiana danych akt" << endl;
        cout << "4 - Wyszukiwanie/filtrowanie po numerze lub typie" << endl;
        cout << "5 - " << endl;
        cout << "6 - Zapisanie bazy danych na dysku w postaci pliku" << endl;
        cout << "7 - Wczytanie zapisanej bazy danych ze wskazanego pliku" << endl;
        cout << "0 - Wyjscie z programu" << endl;
        cin >> wybor;

        switch (wybor) {
            case 1:
                dodajAkta(baza);
                break;
            case 2:
                usunAkta(baza);
                break;
            case 3:
                zmienDane();
                break;
            case 4:
                wyszukaj();
                break;
            case 5:
                break;
            case 6:
                zapiszPlik();
                break;
            case 7:
                wczytajPlik();
                break;
        }
    } while(wybor != 0);

    return 0;
}
