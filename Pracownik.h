#ifndef PRACOWNIK_H
#define PRACOWNIK_H

int random(int min, int max);
double random(double min, double max);

#include <iostream>
#include <string>

using namespace std;

class Pracownik {
public:
    Pracownik();
    virtual void print();
    virtual ~Pracownik();
protected:
    string imie;
    const string listaImion[8] = { "Jan", "Janusz", "Grażyna", "Brajan", "Karyna", "Bdzigost", "Zdziczest", "Bożygniew" };
    const string listaNazwisk[8] = { "Cygan", "Larwa", "Fudali", "Ciemniak", "Dokurwo", "Gej", "Harnaś", "Kfaśny" };
};

#endif /* PRACOWNIK_H */

