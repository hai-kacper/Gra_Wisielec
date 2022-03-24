
#include "wszystko.h"
#define HS 20

int losowanie()
{
    srand(time(NULL));
    int rand_plik = rand() % 8 + 1;
    string kategoria, nazwa_pliku;
    switch (rand_plik)
    {
    case 1:
        nazwa_pliku = "panstwo.txt";
        kategoria = "PANSTWO";
        break;

    case 2:
        nazwa_pliku = "imie.txt";
        kategoria = "IMIE";
        break;

    case 3:
        nazwa_pliku = "jedzenie.txt";
        kategoria = "JEDZENIE";
        break;

    case 4:
        nazwa_pliku = "miasto.txt";
        kategoria = "MIASTO";
        break;

    case 5:
        nazwa_pliku = "roslina.txt";
        kategoria = "ROSLINA";
        break;

    case 6:
        nazwa_pliku = "sport.txt";
        kategoria = "SPORT";
        break;

    case 7:
        nazwa_pliku = "zawod.txt";
        kategoria = "ZAWOD";
        break;

    case 8:
        nazwa_pliku = "zwierze.txt";
        kategoria = "ZWIERZE";
        break;

    default:
        return 1;
    }

    ifstream plik;
    plik.open(nazwa_pliku);
    string hasla[HS];
    for (int i = 0; i < HS; i++)
    {
        plik >> hasla[i];
    }

    int rand_haslo = rand() % HS;
    string haslo = hasla[rand_haslo];

    cout << "Kategoria: " << kategoria << endl;
    cout << "Haslo: " << haslo << endl;

    return 0;
}