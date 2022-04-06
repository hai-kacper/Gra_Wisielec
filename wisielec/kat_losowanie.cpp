
#include "wszystko.h"
#define HS 20
int l_prob=3; //narazie na 3 ustawilem bo se testuje
int checkGuess (char zgad_litera, string ukryte_haslo, string &zgadywane_haslo)
    {
	int i;
	int matches=0;
	int len=ukryte_haslo.length();
	for (i = 0; i< len; i++)
	{
		
		if (zgad_litera == zgadywane_haslo[i])
			return 0;
		
		if (zgad_litera == ukryte_haslo[i])
		{
			zgadywane_haslo[i] = zgad_litera;
			matches++;
		}
	}
	return matches;
    }
int kat_losowanie()
{
    l_prob = 3;
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

    fstream plik;
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
    
	//tworzenie nowego stringa o długości hasła wypełnionego '_'
	string hide_h(haslo.length(),'_');

	while (l_prob!=0)
	{
        char znak;
		cout <<hide_h;
		cout << "\nzgadnij litere: ";
		cin >> znak;

        while (znak > 122 || znak < 65 || znak > 91 && znak < 96) {
            cout << "Niepoprany znak, to nie jest litera\nWprowadz jeszcze raz" << endl;
            cin >> znak;
        }

        if (znak >= 96) {
            znak -= 32;
        }
		
		if (checkGuess(znak, haslo, hide_h)==0)
		{
		    cout<< "zla litera"<<endl;
			l_prob -= 1;
		}
		else
		{
			cout<<"dobra litera"<<endl;
		}
 
 
		
		if (haslo==hide_h)
		{
            cout<< "zgadles haslo!";
			cout << "\n haslo : " << haslo << endl;
            break;
		}
	}
	if(l_prob == 0)
	{
		cout << "Nie zgadles hasla"<<endl;
		cout << "haslo : " << haslo << endl;
	}


    cout << "Czy chcesz zagrac jeszcze raz? [t/n]" << endl;
    char odp;
    cin >> odp;
    if(odp == 't' || odp == 'T')
    {
        kat_losowanie();
    }

    return 0;
}