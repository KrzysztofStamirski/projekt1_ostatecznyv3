#ifndef MAGAZYNIER_H
#define MAGAZYNIER_H

#include "Pracownik.h"

class Magazynier: public Pracownik {
public:
    Magazynier();
    void print();
    static int get_liczba();
    static double get_CMag();
    const static int wynagrodzenie = 3500;
    virtual ~Magazynier();
private:
    bool obsl_widl;
    static int liczba;
    static double CMag;
};

#endif /* MAGAZYNIER_H */

