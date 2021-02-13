/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Kredyt.cpp
 * Author: aljovano
 * 
 * Created on 04. februar 2021., 20.33
 */

#include "Kredyt.h"

Kredyt::Kredyt(double kw, int rt) {
    raty = rt;
    kwota = kw * (1 + 0.02 * raty);
    dlug = kwota;
    pozostale_raty = raty;
}

double Kredyt::splac_rate(){
    pozostale_raty--;
    double oplata = kwota / raty;
    dlug -= oplata;
    return oplata;
}

int Kredyt::get_pozostale_raty(){
    return pozostale_raty;
}

double Kredyt::get_dlug(){
    return dlug;
}

Kredyt::~Kredyt() {
}

