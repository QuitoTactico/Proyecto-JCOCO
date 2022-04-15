#include "Calculadora.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int Calculadora::generarArchivo(){
    
    ifstream plantilla("Calculadora_plantilla.txt", ios::in);
    ofstream ejecutable("Calculadora_ejecutable.casm", ios::out);
    
    bool hecho = false;

    while (!plantilla.eof()) {   //eof = end of file
        string linea;
        getline(plantilla, linea);
        ejecutable << linea << endl;

        if(hecho == false){  
            ejecutable << "Constants: None, " << numero1 << ", " << numero2 << endl; 
            hecho = true; 
        }
    }
    plantilla.close();
    ejecutable.close();
    return 0;
}

int Calculadora::ejecutarArchivo(){
    system("java -jar JCoCo.jar Calculadora_ejecutable.casm");
    return 0;
}

int Calculadora::imprimirArchivo(){
    ifstream imprimir("Calculadora_ejecutable.casm", ios::in);

    cout << imprimir.rdbuf();
    imprimir.close();
    return 0;
}

Calculadora::Calculadora(int _numero1, int _numero2){
    numero1 = _numero1;
    numero2 = _numero2;
}