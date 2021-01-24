#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <fstream>
#include <iterator>

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

void usunAkta(vector<dane> &baza) {
    char numer[50];
    cout << "Podaj numer sprawy, ktora chcesz usunac: ";
    cin >> numer;
    for (int i = 0; i < baza.size(); i++) {
        if (strcmp(baza[i].numerSprawy, numer) == 0) {
            baza.erase(baza.begin() + i);
        }
    }
}

void zmienDane(vector<dane> baza){

}

void wyszukaj(vector<dane> baza){

}

void zapiszPlik(vector<dane> baza){
    ofstream plik;
    plik.open("zapisanaBaza.txt");
    for (int i = 0; i < baza.size(); i++){
        plik << baza[i].numerSprawy << endl;
        plik << baza[i].typ << endl;
        plik << baza[i].dataWszczecia << endl;
        plik << baza[i].dataZakonczenia << endl;
        plik << baza[i].oficerProwadzacy << endl;
        plik << baza[i].oskarzony << endl;
        plik << baza[i].poszkodowany << endl;
        plik << baza[i].swiadek << endl;
    }
    plik.close();
}

void wczytajPlik(vector<dane> &baza){ //do poprawienia
    ifstream plik;
    string temp;
    dane a;
    plik.open("zapisanaBaza.txt");
    if(plik.good()) {
        while (plik.eof() != 1) {
            getline(plik, temp);
            cout << temp << endl;
            for (int j = 0; j < 50; j++) {
                a.numerSprawy[j] = temp[j];
            }
            getline(plik, a.typ);
            getline(plik, a.dataWszczecia);
            getline(plik, a.dataZakonczenia);
            getline(plik, temp);
            for (int k = 0; k < 256; k++) {
                a.oficerProwadzacy[k] = temp[k];
            }
            getline(plik, a.oskarzony);
            getline(plik, a.poszkodowany);
            getline(plik, a.swiadek);
        baza.push_back(a);
        }
    }
        plik.close();
}

void wypiszAkta(vector<dane> baza){
    for (int i = 0; i < baza.size(); i++){
        cout << "Numer sprawy: " << baza[i].numerSprawy << endl;
        cout << "Typ: " << baza[i].typ << endl;
        cout << "Data wszczecia: " << baza[i].dataWszczecia << endl;
        cout << "Data zakonczenia: " << baza[i].dataZakonczenia << endl;
        cout << "Oficer prowadzacy: " << baza[i].oficerProwadzacy << endl;
        cout << "Oskarzony: " << baza[i].oskarzony << endl;
        cout << "Poszkodowany: " << baza[i].poszkodowany << endl;
        cout << "Swiadek: " << baza[i].swiadek << endl;
    }
}

int main() {

    char numer[50];

    vector<dane> baza;

    int wybor;
    do {
        for (int i = 0; i<60;i++){cout << "*";}cout<<endl;
        cout << "Witaj w programie do zarzadzania archiwum kryminalnym!\nCo chcesz zrobic? " << endl;
        cout << "1 - Dodanie akt" << endl;                                         //Dziala
        cout << "2 - Usuniecie akt" << endl;                                        //Dziala
        cout << "3 - Zmiana danych akt" << endl;
        cout << "4 - Wyszukiwanie/filtrowanie po numerze lub typie" << endl;
        cout << "5 - Wypisz" << endl;                                               //Dziala
        cout << "6 - Zapisanie bazy danych na dysku w postaci pliku" << endl;       //Dziala
        cout << "7 - Wczytanie zapisanej bazy danych ze wskazanego pliku" << endl;
        cout << "0 - Wyjscie z programu" << endl;
        for (int i = 0; i<60;i++){cout << "*";}cout<<endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                dodajAkta(baza);
                break;
            case 2:
                usunAkta(baza);
                break;
            case 3:
                zmienDane(baza);
                break;
            case 4:
                wyszukaj(baza);
                break;
            case 5:
                wypiszAkta(baza);
                break;
            case 6:
                zapiszPlik(baza);
                break;
            case 7:
                wczytajPlik(baza);
                break;
        }
    } while(wybor != 0);

    return 0;
}
