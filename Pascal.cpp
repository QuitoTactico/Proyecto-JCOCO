#include "Pascal.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int Pascal::generarArchivo(){
    
    ifstream plantilla("Pascal_plantilla.txt", ios::in);
    ofstream ejecutable("Pascal_ejecutable.casm", ios::out);
    
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

int Pascal::ejecutarArchivo(){
    system("java -jar JCoCo.jar Pascal_ejecutable.casm");
    return 0;
}

int Pascal::imprimirArchivo(){
    ifstream imprimir("Pascal_ejecutable.casm", ios::in);

    cout << imprimir.rdbuf();
    imprimir.close();
    return 0;
}

Pascal::Pascal(int _numero){
    numero = _numero;
}
