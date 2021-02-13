#ifndef INZYNIER_H
#define INZYNIER_H

#include "Pracownik.h"

class Inzynier: public Pracownik {
public:
    Inzynier();
    void print();
    virtual ~Inzynier();
    static int get_liczba();
    static double get_CI();
    static const int wynagrodzenie = 6000;
private:
    string wydzial;
    string listaWydzialow[4] = {"MEiL", "WIM", "AiNS", "WIL" };
    static int liczba;
    static double CI;
};

#endif /* INZYNIER_H */

