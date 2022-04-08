//
// Created by esteb on 6/04/2022.
//

#include "main.h"
#include <iostream>
using namespace std;


int main() {
    //try{
        menuPrincipal();
    /*} catch(const char *msg){

    }
    */
    return 1;
}

int menuPrincipal(){
        int opcion;
        do {
            cout<<"========================"<<endl;
            cout<<"1. Triangulo de Pascal"<<endl;
            cout<<"2. Factorial de un numero"<<endl;
            cout<<"3. Calculadora de Numeros"<<endl;
            cout<<"4. Calculadora de Matrices"<<endl;
            cout<<"5. Salir"<<endl;
            cout<<"Por favor digite su opción"<<endl;
            cin >> opcion;
            switch (opcion) {
                case 1:
                    Pascal a = new Pascal();  //idk cómo se hace
                    break;
                case 2:
                    Factorial();
                    break;
                case 3:
                    CalculadoraNumeros();
                    break;
                case 4:
                    CalculadoraMatrices();
                    break;
                case 5:
                    cout<<"¡Adiós!, vuelve pronto"<<endl;
                    cout<<"[El sistema se ha cerrado.]"<<endl;
            }
        } while (opcion != 5);

    List<int> main::getPascal() {
        return pascal;
    }
    int main::getFactorial() {
        return pascal;
    }
    List<int> main::getCalculadora() {
        return pascal;
    }
    list<int> main::getMatriz() {
        return pascal;
    }
    main::main() = default;

}
