//
// Created by Laurentiu-Andrei Postole on 25/03/2020.
//

#include "persoana.h"
#include <vector>

#ifndef TEMA1_POO_BAZA_DE_DATE_H
#define TEMA1_POO_BAZA_DE_DATE_H


class baza_de_date {
private:
    vector<persoana *> p;
    int n;
public:
    baza_de_date(int n);

    ~baza_de_date();

    void adauga_persoana();

    void elimina_persoana(string nume);

    void elimina_persoana(int an);

    void elimina_persoana(char sex);

    void afisare_nume();

    void afisare_varsta();

};


#endif //TEMA1_POO_BAZA_DE_DATE_H
