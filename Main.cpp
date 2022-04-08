// Hola profe, Laura lo saluda :D
#include <iostream>
#include "Main.h"
using namespace std;

int menu(){
    int opcion;
    do{
        cout<<"========================"<<endl;
        cout<<"1. Triángulo de Pascal"<<endl;
        cout<<"2. Factorial de un numero"<<endl;
        cout<<"3. Calculadora de Números"<<endl;
        cout<<"4. Calculadora de Matrices"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Por favor digite su opción"<<endl;
        cin >> opcion;
        //¿Por qué C++ es tan raro? auxilio
        switch (opcion){
            case 1:
                /* code */
                break;
            case 2:
                /* code */
                break;
            case 3:
                /* code */
                break;
            case 4:
                /* code */
                break;
            default:

                break;
        }
    } while(opcion!=5); 
}   
int main(){
    /*try{
        menu();
    } catch(const char *msg){

    }
    */
   return 0;
}