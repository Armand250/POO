#include "lab1.h"

void setValori(Persoana persoane[]) {
    // Persoana 1
    persoane[0].nume = "Ion Popescu";
    persoane[0].venit = 3000.50;

    // Persoana 2
    persoane[1].nume = "Maria Ionescu";
    persoane[1].venit = 4500.75;

    // Persoana 3
    persoane[2].nume = "Andrei Georgescu";
    persoane[2].venit = 5000.00;

    // Persoana 4
    persoane[3].nume = "Elena Vasilescu";
    persoane[3].venit = 3500.25;

    // Persoana 5
    persoane[4].nume = "Mihai Radu";
    persoane[4].venit = 4000.60;

    // Persoana 6
    persoane[5].nume = "Florin Stanciu";
    persoane[5].venit = 3200.10;

    // Persoana 7
    persoane[6].nume = "Cristina Tudor";
    persoane[6].venit = 4700.80;

    // Persoana 8
    persoane[7].nume = "Adrian Dumitrescu";
    persoane[7].venit = 2800.40;

    // Persoana 9
    persoane[8].nume = "Simona Marinescu";
    persoane[8].venit = 5300.90;

    // Persoana 10
    persoane[9].nume = "Vlad Matei";
    persoane[9].venit = 6000.00;
}

void afiseazaPersoane(const Persoana persoane[], int marime) {
    for (int i = 0; i < marime; ++i) {
        std::cout << "Persoana " << i + 1 << ": " << persoane[i].nume
                  << ", Venit: " << persoane[i].venit << " lei" << std::endl;
    }
}

void sorteazaPersoane(Persoana persoane[], int marime) {
    // Folosim algoritmul Bubble Sort pentru a sorta persoanele după venit
    for (int i = 0; i < marime - 1; ++i) {
        for (int j = 0; j < marime - i - 1; ++j) {
            if (persoane[j].venit > persoane[j + 1].venit) {
                // Schimbăm locul între persoanele cu venituri mai mari
                Persoana temp = persoane[j];
                persoane[j] = persoane[j + 1];
                persoane[j + 1] = temp;
            }
        }
    }
}

void adaugaPersoana(Persoana *persoane, int &numar, int poz){
    int i;
    if(numar>9||numar<0)
        cout<<"Out of bounds!";
    else
    {
        for(i=9;i>poz;i--)
            persoane[i]=persoane[i-1];
        getline(cin,persoane[poz].nume);
        cin>>persoane[poz].venit;
        numar++;
    }
}

void stergePersoana(Persoana *persoane, int &numar, int poz){
    int i;
    if(numar<1)
        cout<<"Out of bounds!";
    else {
        for (i = poz; i < 9; i++)
            persoane[i] = persoane[i + 1];
        numar--;
    }
}