#include <iostream>
#include "persoana.h"
#include "baza_de_date.h"

using namespace std;

int main() {

    string command;
    int n;
    string nume;
    int an;
    char sex;

    cout << "Marimea bazei de date: ";
    cin >> n;
    baza_de_date bd(n);

    cout << "### Pentru afisarea comenzilor tastati !help ###" << endl;
    while (command != "exit") {
        cout << "------- MAIN MENU -------" << endl;
        cout << ": ";
        cin >> command;

        if (command != "exit") {
            if (command == "!help") {
                cout << "# add - pentru adaugarea unei persoane." << endl
                     << "# back - pentru intoarcerea la meniul principal." << endl
                     << "# print - deschiderea meniului de print." << endl
                     << "# print.name - afisarea persoanelor in ordine alfabetica." << endl
                     << "# print.age - afisarea persoanelor in ordinea varstei." << endl
                     << "# remove - deschiderea meniului de remove." << endl
                     << "# remove.name - sterge toate persoanele din baza de date cu numele respectiv." << endl
                     << "# remove.year - sterge toate persoanele din baza de date nascute in anul respectiv." << endl
                     << "# remove.sex - sterge toate persoanele din baza de date cu sexul respectiv." << endl
                     << "# exit - pentru oprirea programului." << endl;
                cout << ": ";
                cin >> command;

                if (command == "add") {
                    cout << "------- ADD MENU -------" << endl;
                    while (command == "add" && command != "back") {
                        bd.adauga_persoana();
                        cout << ": ";
                        cin >> command;
                        if (command == "exit") {
                            return 0;
                        }
                    }
                } else {
                    if (command == "print") {
                        cout << "------- PRINT MENU -------" << endl;
                        cout << ": ";
                        cin >> command;
                        while ((command == "print.name" || command == "print.age") && command != "back") {
                            if (command == "print.name") {
                                bd.afisare_nume();
                                cout << ": ";
                                cin >> command;
                            } else {
                                if (command == "print.age") {
                                    bd.afisare_varsta();
                                }
                                cout << ": ";
                                cin >> command;
                            }
                        }
                    } else {
                        if (command == "remove") {
                            cout << "------- REMOVE MENU -------" << endl;
                            cout << ": ";
                            cin >> command;
                            while ((command == "remove.name" || command == "remove.year" || command == "remove.sex") &&
                                   command != "back") {

                                if (command == "remove.name") {
                                    cout << "Name: ";
                                    cin >> nume;
                                    bd.elimina_persoana(nume);
                                    cout << ": ";
                                    cin >> command;
                                } else {
                                    if (command == "remove.year") {
                                        cout << "Year: ";
                                        cin >> an;
                                        bd.elimina_persoana(an);
                                        cout << ": ";
                                        cin >> command;
                                    } else {
                                        if (command == "remove.sex") {
                                            cout << "Sex: ";
                                            cin >> sex;
                                            bd.elimina_persoana(sex);
                                        }
                                        cout << ": ";
                                        cin >> command;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (command == "add") {
                    cout << "------- ADD MENU -------" << endl;
                    while (command == "add" && command != "back") {
                        bd.adauga_persoana();
                        cout << ": ";
                        cin >> command;
                        if (command == "exit") {
                            return 0;
                        }
                    }
                } else {
                    if (command == "print") {
                        cout << "------- PRINT MENU -------" << endl;
                        cout << ": ";
                        cin >> command;
                        while ((command == "print.name" || command == "print.age") && command != "back") {
                            if (command == "print.name") {
                                bd.afisare_nume();
                                cout << ": ";
                                cin >> command;
                            } else {
                                if (command == "print.age") {
                                    bd.afisare_varsta();
                                }
                                cout << ": ";
                                cin >> command;
                            }
                        }
                    } else {
                        if (command == "remove") {
                            cout << "------- REMOVE MENU -------" << endl;
                            cout << ": ";
                            cin >> command;
                            while ((command == "remove.name" || command == "remove.year" || command == "remove.sex") &&
                                   command != "back") {

                                if (command == "remove.name") {
                                    cout << "Numele: ";
                                    cin >> nume;
                                    bd.elimina_persoana(nume);
                                    cout << ": ";
                                    cin >> command;
                                } else {
                                    if (command == "remove.year") {
                                        cout << "Anul: ";
                                        cin >> an;
                                        bd.elimina_persoana(an);
                                        cout << ": ";
                                        cin >> command;
                                    } else {
                                        if (command == "remove.sex") {
                                            cout << "Sex: ";
                                            cin >> sex;
                                            bd.elimina_persoana(sex);
                                        }
                                        cout << ": ";
                                        cin >> command;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            return 0;
        }
    }


    return 0;
}
