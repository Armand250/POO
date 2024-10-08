#include <iostream>
#include <cstring>

using namespace std;

class Produs {
private:
    char denumire[50];
    char categorie[50];
    double pret;
    int cantitateStoc;
public:
    // Constructori
    Produs(); // Fără parametru
    Produs(const char d[], const char c[], double p, int stoc); // Cu parametru

    // Metodă de set
    void set(const char denumire[], const char categorie[], double pret, int cantitateStoc);

    // Metode de get
    const char* getDenumire();
    const char* getCategorie();
    double getPret();
    int getCantitateStoc();

    // Metodă de afișare
    void afiseazaInfo();
};