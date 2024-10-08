#include "carte.h"

//Implemetare goala
Carte::Carte(){
    strcpy(titlu,"necunoscut");
    strcpy(autor,"necunoscut");
    anPublicare = 0;
    numarPagini = 0;
}

//Constructor cu parametru
Carte::Carte(const char t[], const char a[], int an, int nrPagini){
    strcpy(titlu,t);
    strcpy(autor,a);
    anPublicare = an;
    numarPagini = nrPagini;
}

//Metoda de set
void Carte::set(const char t[], const char a[], int an, int nrPagini){
    strcpy(titlu,t);
    strcpy(autor,a);
    anPublicare = an;
    numarPagini = nrPagini;
}

//Metode de get
const char* Carte::getTitlu() {
    return titlu;
}

const char* Carte::getAutor() {
    return autor;
}

int Carte::getAnPublicare() {
    return anPublicare;
}

int Carte::getNumarPagini() {
    return numarPagini;
}

void Carte::afiseazaInfo() {
    std::cout << "Titlu: " << titlu << "\n";
    std::cout << "Autor: " << autor << "\n";
    std::cout << "An publicare: " << anPublicare << "\n";
    std::cout << "Numar pagini: " << numarPagini << "\n";
}

