
#include "wszystko.h"
#define HS 20
int l_prob=3; //narazie na 3 ustawilem bo se testuje, liczba prob i nom
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
int main()
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
    
	//to powinno robic nowego stringa, o dlugosci hasla ale z X'ow(szyfrowanie)
    //cos z pobieraniem hasla z pliku nie dziala
	string hide_h(haslo.length(),'X');
 	cout<<hide_h;
	while (l_prob!=0)
	{
        char znak;
		cout <<hide_h;
		cout << "\nzgadnij litere: ";
		cin >> znak;
		
		if (checkGuess(znak, haslo, hide_h)==0)
		{
		    cout<< "zla litera"<<endl;;
			l_prob -= 1;
		}
		else
		{
			cout<<"dobra litera"<<endl;;
		}
 
 
		
	/*	if (haslo==hide_h)
		{
			 cout<< "zgadles haslo!";
			cout << "\n haslo : " << haslo << endl;
            exit;
		}*/
	}
	if(l_prob == 0)
	{
		cout << "powiesili cie, sadge"<<endl;
		cout << "haslo : " << haslo << endl;
	}

    return 0;
}