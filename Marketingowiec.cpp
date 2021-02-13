#include "Marketingowiec.h"

Marketingowiec::Marketingowiec() {
    follows = random(1000, 10000);
    Marketingowiec::total_follows += follows;
    Marketingowiec::liczba++;
}

void Marketingowiec::print() {
    cout << Pracownik::imie + ": Marketingowiec, liczba obserwujących: " << follows << ", pensja: " << wynagrodzenie << endl; 
}

int Marketingowiec::liczba = 0;
int Marketingowiec::get_liczba(){
    return Marketingowiec::liczba;
}

double Marketingowiec::CMkt = 0.1;
double Marketingowiec::get_CMkt(){
    return Marketingowiec::CMkt;
}

int Marketingowiec::get_total_follows(){
    return Marketingowiec::total_follows;
}
int Marketingowiec::total_follows = 0;

Marketingowiec::~Marketingowiec() {
}

