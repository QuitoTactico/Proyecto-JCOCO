// Hola profe, Laura lo saluda
#include <iostream>
#include "Calculadora.h"
#include "Cmatrices.h"
#include "Factorial.h"
#include "Pascal.h"
using namespace std;

int menu(){
    int opcion, numero, numero1, numero2;
    do{
        cout<<"========================"<<endl;
        cout<<"1. Triángulo de Pascal"<<endl;
        cout<<"2. Factorial de un numero"<<endl;
        cout<<"3. Calculadora de Números"<<endl;
        cout<<"4. Calculadora de Matrices"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Por favor digite su opción"<<endl;
        cin >> opcion;
        //¿Por qué C++ es tan raro? auxilio,alguienmatemeporfavor
        switch (opcion){
            case 1:
                cout<<"Digíte el numero: "<<endl;cin>>numero;
                Pascal pascal1(numero); pascal1.setPascal(numero);
                break;
            case 2:
                cout<<"Digíte el numero: "<<endl;cin>>numero;
                Factorial factorial1(numero); factorial1.setFactorial(numero);
                break;
            case 3:
                cout<<"Digíte el primer numero: "<<endl;cin>>numero1; 
                cout<<"Digíte el primer numero: "<<endl;cin>>numero2;
                Calculadora calculadora1();
                break;
            case 4:
                cout<<"Digíte el primer numero: "<<endl;cin>>numero1;
                cout<<"Digíte el primer numero: "<<endl;cin>>numero2;
                Cmatrices matrices();
                break;
            default:
                cout<<"¡Adiós! Vuelve pronto."<<endl;
                cout<<"[Sistema Cerrado]"<<endl;
                break;
        }
    } while(opcion!=5); 
}   
int main(){
    try{
        menu();
    } catch(const char *msg){
        //a
    }
   return 0;
}