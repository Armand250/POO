#include "lab1.h"

int main() {
    int marime=10;
    // 1. Declarăm un vector de 10 elemente de tip Persoana
    Persoana persoane[10];

    // 2. Apelăm funcția setValori pentru a seta valorile în vectorul persoane
    setValori(persoane);

    // 3. Apelăm funcția afiseazaPersoane pentru a afișa lista de persoane înainte de sortare
    afiseazaPersoane(persoane, 10);

    // 4. Apelăm funcția sorteazaPersoane pentru a sorta persoanele după venit
    sorteazaPersoane(persoane, 10);

    // 5. Afișăm din nou lista sortată
    afiseazaPersoane(persoane, 10);
    stergePersoana(persoane,marime,5);
    afiseazaPersoane(persoane,marime);
    adaugaPersoana(persoane,marime,8);
    afiseazaPersoane(persoane,marime);
    return 0;
}
