#ifndef GRA_H
#define GRA_H

#include <memory>
#include <algorithm>

#include "Firma.h"

class Gra {
public:
    Gra();
    void akcja_gracza();
    bool get_stan();
    virtual ~Gra();
private:
    Firma* firma;
    bool stan;
    string mozliweAkcje = "Wybierz akcję:\n\n"
        "lp - wylistuj pracowników (imiona i wynagrodzenia)\n"
        "zinz - zatrudnij inż.\n"
        "zmag - zatrudnij mag.\n"
        "zmkt - zatrudnij mark.\n"
        "zrob - zatrudnij rob.\n"
        "kred - weź kredyt (w następnym kroku podaj kwotę i czas spłaty)\n"
        "kt - zakończ turę i wyświetl stan firmy na początku następnego miesiąca\n";
    void tick();
    double cel;
    const int max_czas_splaty = 120;
    const int M = 3;
};

#endif /* GRA_H */

