#include "Factorial.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int Factorial::generarArchivo(){
    
    ifstream plantilla("Factorial_plantilla.txt", ios::in);
    ofstream ejecutable("Factorial_ejecutable.casm", ios::out);
    
    bool hecho = false;

    while (!plantilla.eof()) {   //eof = end of file
        string linea;
        getline(plantilla, linea);
        ejecutable << linea << endl;

        if(hecho == false){  
            ejecutable << "Constants: None, " << numero << endl; 
            hecho = true; 
        }
    }
    plantilla.close();
    ejecutable.close();
    return 0;
}

int Factorial::ejecutarArchivo(){
    system("java -jar JCoCo.jar Factorial_ejecutable.casm");
    return 0;
}

int Factorial::imprimirArchivo(){
    ifstream imprimir("Factorial_ejecutable.casm", ios::in);

    cout << imprimir.rdbuf();
    imprimir.close();
    return 0;
}

Factorial::Factorial(int _numero){
    numero = _numero;
}