#include "produs.h"
#ifndef PRODUS_H
#define PRODUS_H
//Produs::Produs() {
//    strcpy(denumire, "Necunoscut");
//    strcpy(categorie, "Necunoscuta");
//    pret = 0.0;
//    cantitateStoc = 0;
//}
//
//// Constructor cu parametru
//Produs::Produs(const char d[], const char c[], double p, int stoc) {
//    strcpy(denumire, d);
//    strcpy(categorie, c);
//    pret = p;
//    cantitateStoc = stoc;
//}
//
//// Metodă de set
//void Produs::set(const char denumire[], const char categorie[], double pret, int cantitateStoc) {
//    // Implementare goală
//}
//
//// Metode de get
//const char* Produs::getDenumire() {
//    // Implementare goală
//    return nullptr;
//}
//
//const char* Produs::getCategorie() {
//    // Implementare goală
//    return nullptr;
//}
//
//double Produs::getPret() {
//    // Implementare goală
//    return 0.0;
//}
//
//int Produs::getCantitateStoc() {
//    // Implementare goală
//    return 0;
//}
//
//// Metodă de afișare
//void Produs::afiseazaInfo() {
//    // Implementare goală
//}
Produs::Produs() {
    strcpy(denumire, "Necunoscut");
    strcpy(categorie, "Necunoscuta");
    pret = 0.0;
    cantitateStoc = 0;
}

// Constructor cu parametru
Produs::Produs(const char d[], const char c[], double p, int stoc) {
    strcpy(denumire, d);
    strcpy(categorie, c);
    pret = p;
    cantitateStoc = stoc;
}

// Metodă de set
void Produs::set(const char denumire[], const char categorie[], double pret, int cantitateStoc) {
    strcpy(this->denumire, denumire);
    strcpy(this->categorie, categorie);
    this->pret = pret;
    this->cantitateStoc = cantitateStoc;
}

// Metodă de get pentru denumire
const char* Produs::getDenumire() {
    return denumire;
}

// Metodă de get pentru categorie
const char* Produs::getCategorie() {
    return categorie;
}

// Metodă de get pentru pret
double Produs::getPret() {
    return pret;
}

// Metodă de get pentru cantitate în stoc
int Produs::getCantitateStoc() {
    return cantitateStoc;
}

// Metodă de afișare
void Produs::afiseazaInfo() {
    std::cout << "Denumire: " << denumire << "\n";
    std::cout << "Categorie: " << categorie << "\n";
    std::cout << "Pret: " << pret << "\n";
    std::cout << "Cantitate in stoc: " << cantitateStoc << "\n";
}

#endif
