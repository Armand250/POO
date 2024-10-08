#include "student.h"

//Implementare goala
Student::Student(){
    strcpy(nume,"Necunoscut");
    strcpy(prenume,"Necunoscut");
    varsta = 0;
    medie = 0.0;
}

//Constructor cu parametru
Student::Student(const char n[], const char p[], int v, double m){
    strcpy(nume, n);
    strcpy(prenume,p);
    varsta = v;
    medie = m;
}

//Metoda de set
void Student::set(const char n[], const char p[], int v, double m){
    strcpy(nume, n);
    strcpy(prenume,p);
    varsta = v;
    medie = m;
}

//Metode de get
const char* Student::getNume(){
    return nume;
}

const char* Student::getPrenume() {
    return prenume;
}

int Student::getVarsta() {
    return varsta;
}

double Student::getMedie() {
    return medie;
}

void Student::afiseazaInfo() {
    std::cout << "Nume: " << nume << "\n";
    std::cout << "Prenume: " << prenume << "\n";
    std::cout << "Varsta: " << varsta << "\n";
    std::cout << "Medie: " << medie << "\n";
}


