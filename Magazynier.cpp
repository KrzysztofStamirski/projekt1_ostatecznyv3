#include "Magazynier.h"

Magazynier::Magazynier() {
    obsl_widl = (bool) random(0,1);
    Magazynier::liczba++;
}

void Magazynier::print() {
    cout << Pracownik::imie + ": Magazynier, obsługa wózka: " << (obsl_widl ? "tak" : "nie") << ", pensja: " << wynagrodzenie << endl;
}

int Magazynier::liczba = 0; 
int Magazynier::get_liczba(){
    return Magazynier::liczba;
}

double Magazynier::CMag = 70.0;
double Magazynier::get_CMag(){
    return Magazynier::CMag;
}

Magazynier::~Magazynier() {
}

