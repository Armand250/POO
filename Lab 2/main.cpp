#include "produs.h"
#include "student.h"
#include "carte.h"

int main() {
//    Produs produs1;
//
//    // Afișare informații inițiale
//    std::cout << "Informații produs1 (fără parametru):\n";
//    produs1.afiseazaInfo();
//
//    // Creare obiect folosind constructorul cu parametru
//    Produs produs2("Laptop", "Electronics", 2999.99, 5);
//
//    // Afișare informații pentru produs2
//    std::cout << "\nInformații produs2 (cu parametru):\n";
//    produs2.afiseazaInfo();
//
//    // Modificare atribute folosind metoda set
//    produs1.set("Smartphone", "Electronics", 1499.99, 10);
//
//    // Afișare informații după setare
//    std::cout << "\nInformații produs1 după setare:\n";
//    produs1.afiseazaInfo();
//
//    // Testare metode de get
//    std::cout << "\nVerificare metode get pentru produs1:\n";
//    std::cout << "Denumire: " << produs1.getDenumire() << "\n";
//    std::cout << "Categorie: " << produs1.getCategorie() << "\n";
//    std::cout << "Pret: " << produs1.getPret() << " RON\n";
//    std::cout << "Cantitate in stoc: " << produs1.getCantitateStoc() << "\n";
      Carte carte1;
    // Testare afisare fara parametru
      std::cout << "Informatii carte1 (fara parametru):\n";
      carte1.afiseazaInfo();
    // Testare afisare cu parametru
      Carte carte2("Mica Sirena","Hans Christian Andersen",1902,234);
      std::cout << "Informatii carte2 (cu parametru):\n";
      carte2.afiseazaInfo();
    // Testare set + afisare
      carte1.set("Luceafarul","Mihai Eminescu",1981,16);
      std::cout << "\nInformații carte1 după setare:\n";
      carte1.afiseazaInfo();
    // Testare metode de get
      std::cout << "\nVerificare metode get pentru carte1:\n";
      std::cout << "Titlu: " << carte1.getTitlu() << "\n";
      std::cout << "Autor: " << carte1.getAutor() << "\n";
      std::cout << "An Publicare: " << carte1.getAnPublicare() << "\n";
      std::cout << "Numar pagini: " << carte1.getNumarPagini() << "\n";
      //
    Student student1;
    // Testare afisare fara parametru
    std::cout << "Informatii student1 (fara parametru):\n";
    student1.afiseazaInfo();
    // Testare afisare cu parametru
    Student student2("Olaf","Jakobsen",20,9.67);
    std::cout << "Informatii student2 (cu parametru):\n";
    student2.afiseazaInfo();
    // Testare set + afisare
    student1.set("Henrik","Johanssen",18,10);
    std::cout << "\nInformații student1 după setare:\n";
    student1.afiseazaInfo();
    // Testare metode de get
    std::cout << "\nVerificare metode get pentru student1:\n";
    std::cout << "Nume: " << student1.getNume() << "\n";
    std::cout << "Prenume: " << student1.getPrenume() << "\n";
    std::cout << "Varsta: " << student1.getVarsta() << "\n";
    std::cout << "Medie: " << student1.getMedie() << "\n";
    return 0;
}
