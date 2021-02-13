#ifndef FIRMA_H
#define FIRMA_H

#include "Pracownik.h"
#include "Marketingowiec.h"
#include "Inzynier.h"
#include "Magazynier.h"
#include "Robotnik.h"
#include <vector>
#include <memory>
#include "Kredyt.h"

class Firma {
public:
    Firma();
    void zatrudnij(Pracownik* p);
    const void drukuj_pracownikow();
    const double get_stan_konta();
    void set_stan_konta(double setstan);
    void zaplac_wynagrodzenie();
    void otrzymaj_przychod();
    static const int N;
    double wartosc_firmy();
    void wez_kredyt(double kwota, int czas_splaty);
    void splac_raty();
    double dlug_calkowity();
    virtual ~Firma();
private:
    vector<Pracownik*> prac;
    int n_prac;
    double stan_konta;
    const double oblicz_przychod();
    int zapisz;
    vector<Kredyt*> kredyty;
    int n_kredytow = 0;
    vector<double> historia_przych;
};

#endif /* FIRMA_H */

