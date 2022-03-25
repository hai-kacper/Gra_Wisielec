
#include "wszystko.h"
#define HS 20
int l_prob=3; //narazie na 3 ustawilem bo se testuje, liczba prob i nom
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
    
	
	string hide_m(haslo.length(),'X');
 
	
    int checkGuess (char zgad_litera, string ukryte_haslo, string &zgadywane_haslo)
    {
	int i;
	int matches=0;
	int len=secretmonth.length();
	for (i = 0; i< len; i++)
	{
		
		if (zgad_litera == zgadywane_haslo[i])
			return 0;
		
		if (zgad_litera == ukryte_haslo[i])
		{
			zgadywane_haslo[i] = guess;
			matches++;
		}
	}
	return matches;
    }
	
	while (l_prob!=0)
	{
        char znak;
		cout << "\n\n\t\t\t\t" << hide_m;
		cout << "\n\n\t\t\t\tGuess a letter: ";
		cin >> znak;
		
		if (checkGuess(znak, haslo, hide_m)==0)
		{
		    cout<< "Incorrect letter."<<endl;;
			l_prob -= 1;
		}
		else
		{
			cout<<"NICE! You guess a letter"<<endl;;
		}
 
 
		
		if (haslo==hide_m)
		{
			 cout<< "zgadles haslo!";
			cout << "\n haslo : " << haslo << endl;
		}
	}
	if(l_prob == 0)
	{
		cout << "powiesili cie, sadge">>endl;
		cout << "\nhaslo : " << haslo << endl;
	}

    return 0;
}