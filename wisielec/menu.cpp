
#include "wszystko.h"
void menu()
{
    system("cls");
    int wybor;
    cout << "\nMENU" << endl;
    cout << "\n1.START GRY" << endl;
    cout << "2.DOSTEPNE KATEGORIE" << endl;
    cout << "3.INSTRUKCJA" << endl;
    cout << "\nWpisz odpowiedni numer i wcisnij ENTER ";
    cin >> wybor;
    switch (wybor)
    {
    case 1:
        cout << "Tu zacznie sie gra, kiedy napiszemy kod" << endl;
   //
    kat_losowanie();
        break;

    case 2:
        system("cls");
        cout << "KATEGORIE" << endl;
        cout << "\n1.PANSTWO" << endl;
        cout << "2.MIASTO" << endl;
        cout << "3.ZWIERZE" << endl;
        cout << "4.ROSLINA" << endl;
        cout << "5.IMIE" << endl;
        cout << "6.SPORT" << endl;
        cout << "7.JEDZENIE" << endl;
        cout << "8.ZAWOD" << endl;
        cout << "\nWcisnij ENTER aby wrocic do menu \n";
        getchar();
        if (getchar() == '\n')
        {
            menu();
        }
        break;

    case 3:
system("cls");
cout<<"INSTRUKCJA"<<endl;
cout<<"\nTresc instrukcji"<<endl;
cout<<"\nWcisnij ENTER aby wrocic do menu \n";
getchar();
if (getchar()=='\n')
{
            menu();
}
break;

default:
cout<<"Wybrano niepoprawna opcje"<<endl;
    }
}

int main()
{
    cout << "Gra w wisielca. Nacisnij ENTER aby rozpoczac" << endl;

    cin.ignore();
    menu();
    return 0;
}
