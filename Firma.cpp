#include "Firma.h"

Firma::Firma() {
    zapisz = 0;
    stan_konta = 50000.0;
    for (int i = 0; i < Firma::N; i++) {
        historia_przych.push_back(50000.0);
    }
    Inzynier *inz = new Inzynier();
    zatrudnij(inz);
    Marketingowiec *mkt = new Marketingowiec();
    zatrudnij(mkt);
    Magazynier *mag = new Magazynier();
    zatrudnij(mag);
    Robotnik *rob = new Robotnik();
    zatrudnij(rob);
}

void Firma::zatrudnij(Pracownik* p){
    p->print();
    prac.push_back(p);
    n_prac++;
}

const void Firma::drukuj_pracownikow(){
    cout << "Pracownicy:" << endl;
    for(Pracownik* p: prac) {
        p->print();
    }
}

const double Firma::get_stan_konta(){
    return stan_konta;
}
void Firma::set_stan_konta(double setstan){
    stan_konta=setstan;
};

void Firma::zaplac_wynagrodzenie(){
    stan_konta -= Robotnik::get_liczba() * Robotnik::wynagrodzenie + Magazynier::get_liczba() * Magazynier::wynagrodzenie + Marketingowiec::get_liczba() * Marketingowiec::wynagrodzenie + Inzynier::get_liczba() * Inzynier::wynagrodzenie;
}

void Firma::otrzymaj_przychod(){
    double przychod = oblicz_przychod();
    historia_przych[zapisz] = przychod;
    zapisz++;
    if(zapisz == Firma::N) {
        zapisz = 0;
    }
    
    stan_konta += przychod;
}

double Firma::wartosc_firmy(){
    double total = 0;
    for(double hp: historia_przych){
        total += hp;
    }
    return total / Firma::N;
}

const double Firma::oblicz_przychod(){
    int wyprodokowane = (int) Robotnik::get_liczba() * Robotnik::get_CR();
    int pojemnosc_magazynu = (int) Magazynier::get_liczba() * Magazynier::get_CMag();
    int zmagazynowane = min(wyprodokowane, pojemnosc_magazynu);
    int sprzedane = (int) min( (int) (Marketingowiec::get_CMkt() * Marketingowiec::get_liczba() * Marketingowiec::get_total_follows()), zmagazynowane);
    double cena= Inzynier::get_liczba() * Inzynier::get_CI()*1000;
    return sprzedane * cena;
}

void Firma::wez_kredyt(double kwota, int czas_splaty){
    Kredyt *kred = new Kredyt(kwota, czas_splaty);
    kredyty.push_back(kred);
    n_kredytow++;
    stan_konta += kwota;
}

void Firma::splac_raty(){
    int index = 0;
    for(Kredyt* k: kredyty) {
        stan_konta -= k->splac_rate();
        if(k->get_pozostale_raty() == 0) {
            kredyty.erase(kredyty.begin() + index);
            n_kredytow--;
            continue;
        }
        index++;
    }
}

double Firma::dlug_calkowity(){
    double dlug = 0;
    for(Kredyt* k: kredyty) {
        dlug += k->get_dlug();
    }
    return dlug;
}

const int Firma::N = 3;
//vector<Pracownik*> Firma::get_prac(){
//    return prac;
//}

Firma::~Firma() {
}

