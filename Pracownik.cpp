#include <random>

#include "Pracownik.h"

thread_local mt19937 gen{random_device{}()};
int random(int min, int max) {
    return uniform_int_distribution<int>{min, max}(gen);
}
double random(double min, double max) {
    return uniform_real_distribution<double>{min, max}(gen);
}

Pracownik::Pracownik() {
    int losowy1 = random(0, ( sizeof(listaImion) / sizeof(listaImion[0]) - 1));
    imie = listaImion[losowy1];
    int losowy2 = random(0, ( sizeof(listaNazwisk) / sizeof(listaNazwisk[0]) -1));
    imie += " " + listaNazwisk[losowy2];
}
void Pracownik::print(){};
Pracownik::~Pracownik() {
}

