/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Robotnik.cpp
 * Author: aljovano
 * 
 * Created on 04. februar 2021., 14.45
 */

#include "Robotnik.h"

Robotnik::Robotnik() {
    but = random(35.0, 48.0);
    Robotnik::liczba++;
}

void Robotnik::print(){
        cout << Pracownik::imie + ": Robotnik, rozmiar buta: " << but << ", pensja: " << wynagrodzenie << endl;
}

int Robotnik::liczba = 0;
int Robotnik::get_liczba(){
    return Robotnik::liczba;
}

double Robotnik::CR = 1.0;
double Robotnik::get_CR(){
    return Robotnik::CR;
}

Robotnik::~Robotnik() {
}

