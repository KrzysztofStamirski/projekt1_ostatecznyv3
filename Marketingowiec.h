#ifndef MARKETINGOWIEC_H
#define MARKETINGOWIEC_H

#include "Pracownik.h"

class Marketingowiec: public Pracownik {
public:
    Marketingowiec();
    void print();
    static int get_liczba();
    static double get_CMkt();
    const static int wynagrodzenie = 4500;
    static int get_total_follows();
    virtual ~Marketingowiec();
private:
    int follows;
    static int liczba;
    static double CMkt;
    static int total_follows;
};

#endif /* MARKETINGOWIEC_H */

