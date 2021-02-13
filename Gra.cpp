#include "Gra.h"

using namespace std;

Gra::Gra() {
    firma = new Firma();
    stan = true;
    cel = 100000;
    cout << mozliweAkcje << endl;
}

void Gra::akcja_gracza(){
    string akcja;
    cin >> akcja;
        string znaneAkcje[] = {"lp", "zinz", "zmag", "zmkt", "zrob", "kred", "kt"};
        bool komendaZnana = find(begin(znaneAkcje), end(znaneAkcje), akcja) != end(znaneAkcje);
        if(!komendaZnana) {
            cout << akcja + " jest nieznana akcja!" << endl;
            cout << mozliweAkcje << endl;
            return;
        }
        
        if (akcja == "zinz") {
            Inzynier *inz = new Inzynier();
            firma->zatrudnij(inz);
        }
        
        if (akcja == "zmkt") {
            Marketingowiec *mkt = new Marketingowiec();
            firma->zatrudnij(mkt);
        }
        
        if (akcja == "zmag") {
            Magazynier *mag = new Magazynier();
            firma->zatrudnij(mag);
        }
        
        if (akcja == "zrob") {
            Robotnik *rob = new Robotnik();
            firma->zatrudnij(rob);
        }
        
        if (akcja == "lp") {
            firma->drukuj_pracownikow();
        }
        
        if (akcja == "kt") {
            tick();
        }
        
        if (akcja == "kred") {
            cout << "Kwota: " << endl;
            double kwota;
            cin >> kwota;
            if(kwota>firma->wartosc_firmy()){
              cout<<"wyqrwiaj"<<endl;
              
            }
            else{
              cout << "Czas splaty(raty)" << endl;
              int czas_splaty;
              cin >> czas_splaty;
              if(czas_splaty > max_czas_splaty) {
                  cout << "za duzo rat" << endl;
              } else {
                Kredyt *test_kred = new Kredyt(kwota, czas_splaty);
                if( (firma->wartosc_firmy() * M) < (firma->dlug_calkowity() + test_kred->get_dlug())){
                    cout << "Dlug firmy za duży na ten kredyt" << endl; 
                } else {
                    firma->wez_kredyt(kwota, czas_splaty);
                }
              }
            }
        }
}

bool Gra::get_stan(){
    return stan;
}

void Gra::tick(){    
    firma->zaplac_wynagrodzenie();
    if(firma->get_stan_konta() < 0){
        cout << "Zbankrutowałeś - przegrana" << endl;
        stan = false;
    }
    else{
        firma->otrzymaj_przychod();

        firma->splac_raty();

        cout << "Stan konta: " << firma->get_stan_konta() << endl;

        if(firma->wartosc_firmy() > cel) {
            cout << "Koniec gry - wygrana" << endl;
            stan = false;
        }
    }
}


Gra::~Gra() {
}

