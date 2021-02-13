#include "Inzynier.h"


Inzynier::Inzynier() {
    int losowy = random(0, ( sizeof(listaWydzialow) / sizeof(listaWydzialow[0]) -1));
    wydzial = listaWydzialow[losowy];
    Inzynier::liczba++;
}

void Inzynier::print(){
    cout << Pracownik::imie + ": Inżynier, ukończył: " + wydzial + ", pensja: " << wynagrodzenie << endl; 
};

int Inzynier::liczba = 0;
int Inzynier::get_liczba(){
    return Inzynier::liczba;
}

double Inzynier::CI = 1.2;
double Inzynier::get_CI(){
    return Inzynier::CI;
}

Inzynier::~Inzynier() {
}

