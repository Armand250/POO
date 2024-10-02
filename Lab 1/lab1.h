#include <iostream>
#include <cstring>

using namespace std;

struct Persoana {
    string nume;
    double venit;
};

void setValori(Persoana persoane[]); // Declarația funcției pentru setarea valorilor
void afiseazaPersoane(const Persoana persoane[], int marime); // Declarația funcției pentru afișare
void sorteazaPersoane(Persoana persoane[], int marime); // Declarația funcției pentru sortare
void adaugaPersoana(Persoana *persoane, int &numar, int poz);
void stergePersoana(Persoana *persoane, int &numar, int poz);