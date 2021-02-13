/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Kredyt.h
 * Author: aljovano
 *
 * Created on 04. februar 2021., 20.33
 */

#ifndef KREDYT_H
#define KREDYT_H

class Kredyt {
public:
    Kredyt(double kw, int rt);
    double splac_rate();
    int get_pozostale_raty();
    double get_dlug();
    virtual ~Kredyt();
private:
    double kwota;
    int raty;
    double dlug;
    int pozostale_raty;
};

#endif /* KREDYT_H */

