//
// Created by Laurentiu-Andrei Postole on 25/03/2020.
//

#include "baza_de_date.h"
#include <vector>
#include "persoana.h"
#include <iostream>

baza_de_date::baza_de_date(int nr) {
    n = nr;
    for (int i = 0; i < n; i++) {
        p.push_back(NULL);
    }

}

baza_de_date::~baza_de_date() {
    for (vector<persoana *>::iterator x = p.begin(); x != p.end(); ++x) {
        delete *x;
    }

    p.clear();
}

void baza_de_date::adauga_persoana() {
    string nume;
    cout << "Nume: ";
    cin >> nume;
    int an;
    cout << "Anul nasterii: ";
    cin >> an;
    char s;
    cout << "Sex: ";
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (p[i] == NULL) {
            p[i] = new persoana;
            p[i]->set_nume(nume);
            p[i]->set_anul_nasterii(an);
            p[i]->set_sex(s);
            break;
        }
    }
}

void baza_de_date::elimina_persoana(string nume) {
    for (int i = 0; i < n; i++) {
        if (p[i] != NULL && p[i]->get_nume() == nume) {
            p.erase(p.begin() + i);
            i--;
        }
    }
}

void baza_de_date::elimina_persoana(int an) {
    for (int i = 0; i < n; i++) {
        if (p[i] != NULL && p[i]->get_anul_nasterii() == an) {
            p.erase(p.begin() + i);
            i--;
        }
    }
}

void baza_de_date::elimina_persoana(char sex) {
    for (int i = 0; i < n; i++) {
        if (p[i] != NULL && p[i]->get_sex() == sex) {
            p.erase(p.begin() + i);
            i--;
        }
    }
}


void baza_de_date::afisare_nume() {
    persoana *aux;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (p[i] != NULL && p[j] != NULL && (p[i]->get_nume() > p[j]->get_nume())) {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (p[i] != NULL) {
            cout << endl << "NUME: " << p[i]->get_nume() << endl << "ANUL NASTERII: " << p[i]->get_anul_nasterii()
                 << endl << "SEX: " << p[i]->get_sex() << endl << endl;
        }
    }

}

void baza_de_date::afisare_varsta() {
    persoana *aux;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            if (p[i] != NULL && p[j] != NULL && (p[i]->get_anul_nasterii() > p[j]->get_anul_nasterii())) {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (p[i] != NULL) {
            cout << endl << "NUME: " << p[i]->get_nume() << endl << "ANUL NASTERII: " << p[i]->get_anul_nasterii()
                 << endl << "SEX: " << p[i]->get_sex() << endl << endl;
        }
    }

}






