//
// Created by Laurentiu-Andrei Postole on 25/03/2020.
//

#include <string>

using namespace std;

#ifndef TEMA1_POO_PERSOANA_H
#define TEMA1_POO_PERSOANA_H


class persoana {
private:
    string nume;
    int anul_nasterii;
    char sex;
public:
    void set_nume(string n);

    void set_anul_nasterii(int an);

    void set_sex(char s);

    string get_nume();

    int get_anul_nasterii();

    char get_sex();
};


#endif //TEMA1_POO_PERSOANA_H
