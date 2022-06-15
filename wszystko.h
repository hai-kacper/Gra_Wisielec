#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include <stdbool.h>
#ifndef GRA_WISIELEC_MENU_H
#define GRA_WISIELEC_MENU_H


using namespace std;

void menu();
int gra();
void dostepne_litery();
void wczytanie_wisielca();
bool czy_znak_jest_litera(char);
void dostepne_litery_aktualizacja();
void wyswietlenie_liter();
char mala_litera_na_duza(char);
void wczytanie_hasel(string);

#endif //GRA_WISIELEC_MENU_H#pragma once
