//
// Created by Laurentiu-Andrei Postole on 25/03/2020.
//

#include "persoana.h"
#include <string>

void persoana::set_nume(string n) { nume = n; }

void persoana::set_anul_nasterii(int an) { anul_nasterii = an; }

void persoana::set_sex(char s) { sex = s; }

string persoana::get_nume() { return nume; }

int persoana::get_anul_nasterii() { return anul_nasterii; }

char persoana::get_sex() { return sex; }

