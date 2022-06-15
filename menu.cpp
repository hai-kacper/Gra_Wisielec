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
    {
        switch (wybor)
        {
        case 1:
            cout << "Start gry" << endl;
            //
            gra();
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
            cout << "INSTRUKCJA" << endl;
            cout << "\nGra Wisielec polega na odgadnieciu hasla na podstawie wylosowanej kategorii. Wyswietlona jest liczba liter danego hasla w postaci pustych miejsc. By wygrac, nalezy podac wszystkie litery danego hasla przed wyczerpaniem dozwolonej liczby bledow. Po podaniu 10 nieprawidlowych liter uzytkownik przegrywa. Przy kazdej blednej probie rysowana jest kolejna czesc wisielca. Wszystkie uzyte litery zostana wyswietlone w odpowiednim miejscu. Po wprowadzeniu uzytej juz wczesniej litery zostanie wyswietlony o tym komunikat, nie jest to zaliczane jako blad." << endl;
            cout << "\nWcisnij ENTER aby wrocic do menu \n";
            getchar();
            if (getchar() == '\n')
            {
                menu();
            }
            break;

        default:
            cout << "Wybrano niepoprawna opcje" << endl;
        }
    }

}
