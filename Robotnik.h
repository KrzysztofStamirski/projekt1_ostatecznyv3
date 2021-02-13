#ifndef ROBOTNIK_H
#define ROBOTNIK_H

#include "Pracownik.h"

class Robotnik: public Pracownik {
public:
    Robotnik();
    void print();
    static int get_liczba();
    static double get_CR();
    const static int wynagrodzenie = 2200;
    virtual ~Robotnik();
private:
    double but;
    static int liczba;
    static double CR;
};

#endif /* ROBOTNIK_H */

