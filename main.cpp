#include <cstdlib>

#include "Gra.h"

int main(int argc, char**argv) {
    Gra *gra = new Gra();
    do {
        gra->akcja_gracza();
    } while (gra->get_stan());

    return 0;
}
