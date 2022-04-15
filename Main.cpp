// Hola profe, Laura lo saluda :D
// Y tmb Esteban, jajjsja
#include <iostream>         // máximos valores permitidos:
#include "Pascal.cpp"       //            34
#include "Factorial.cpp"    //            12
#include "Calculadora.cpp"
#include "Cmatrices.cpp"
using namespace std;
/*
cosas por hacer:    excepciones, [borrar archivos temporales/borrar caché/eliminar/ejecutables], pinchematriz
                    pasar algunas cosas a: char ejemoloString[100];   \n   cin >> ejemploString;
                    https://www.codigazo.com/en-c/eliminar-archivo-texto-en-c
excepciones por hacer:  cuando opcion, num1, o num2 no es un int. cuando imprimir es un inválido tipo string
                        cuando en Calculadora, el segundo input es 0, lo mismo para todo input de matriz_2
*/

int numero1, numero2;
char imprimir;

int menuPascal();
int menuFactorial();
int menuCalculadora();
int menuCmatrices();
int eliminarCache();
bool menuImprimir();

int menu(){
        
    int opcion;

    do{
        cout<<"\n";
        cout<<".==============================.\n";
        cout<<"| 1. Triangulo de Pascal       |\n";
        cout<<"| 2. Factorial de un numero    |\n";
        cout<<"| 3. Calculadora de Numeros    |\n";
        cout<<"| 4. Calculadora de Matrices   |\n";
        cout<<"| 5. Eliminar cache            |\n";
        cout<<"| 0. Salir                     |\n";
        cout<<"| Por favor digite su opcion:  ";
        cin >> opcion;
        //¿Por qué C++ es tan raro? auxilio,alguienmatemeporfavor
        //Odio c++
        //Omo c++
        switch (opcion){
            case 1:
                menuPascal();
                break;
            case 2:
                menuFactorial();
                break;
            case 3:
                menuCalculadora();
                break;
            case 4:
                menuCmatrices();
                break;
            case 5:
                eliminarCache();
                break;
            case 0:
                cout<<"|                              |\n";
                cout<<"|   Adios! Vuelve pronto c:    |\n";
                cout<<"|      [Sistema Cerrado]       |\n";
                cout<<"'=============================='\n\n";
                break;
            default:
                cout<<"Por favor ingrese una opcion valida.\n";
        }
    } while(opcion!=0); 
    return 0;
}   

bool menuImprimir(){
    cout<<"\n.==============================.\n";
    cout<<  "|  Desea imprimir el archivo   |\n"; 
    cout<<  "|     ejecutado? (JcoCo)       |\n";  
                
    while(true){
    cout << "|          > Y / N:            ";
        cin >> imprimir;

        if(imprimir == 'Y' or imprimir == 'y' or imprimir == '1' or imprimir == 'S' or imprimir == 's'){
            cout<<"'=============================='\n";
            cout << "ok c:\n\n";
            return true;
        }else if(imprimir == 'N' or imprimir == 'n' or imprimir == '0' or imprimir == '2'){
            cout<<"| [El archivo no fue impreso.] |\n";
            cout<<"'=============================='\n";
            return false;
        }
    }
}

int menuPascal(){
    cout<<"|                              |\n";
    cout<<"|  ----- [ 1.Pascal ] -------  |\n";
    cout<<"|     > Digite el nivel:       ";
    cin>>numero1;                            
    cout<<"'=============================='\n\n";

    Pascal pascal = Pascal(numero1); 
    pascal.generarArchivo();
    pascal.ejecutarArchivo();
    if(menuImprimir()==true)  { pascal.imprimirArchivo(); }

return 0;
}

int menuFactorial(){
    cout<<"|                              |\n";
    cout<<"|  ---- [ 2.Factorial ] -----  |\n";
    cout<<"|     > Digite el numero:      ";
    cin>>numero1;                            
    cout<<"'=============================='\n\n";

    Factorial factorial = Factorial(numero1); 
    factorial.generarArchivo();
    factorial.ejecutarArchivo();
    if(menuImprimir()==true)  { factorial.imprimirArchivo(); }

return 0;
}

int menuCalculadora(){
    cout<<"|                              |\n";
    cout<<"|  --- [ 3.Calculadora ] ----  |\n";
    cout<<"|  > Digite el primer numero:  ";
    cin>>numero1; 
    cout<<"|  > Digite el segundo numero: ";
    cin>>numero2;                            
    cout<<"'=============================='\n\n";

    Calculadora calculadora = Calculadora(numero1,numero2); 
    calculadora.generarArchivo();
    calculadora.ejecutarArchivo();
    if(menuImprimir()==true)  { calculadora.imprimirArchivo(); }

return 0;
}

int menuCmatrices(){
    cout<<"nose, /cry \n";
    //help
    cout<<"Pana, rote la dimension de sus matrices, el resto qcyo, ñ"<< endl;
    return 0;
}

int eliminarCache(){
    cout<<"| ---------------------------- |\n";
    cout<<"|   [  Se eliminaron los   ]   |\n";
    cout<<"|   [ejecutables existentes]   |\n";
    cout<<"'=============================='\n";
    remove("Pascal_ejecutable.casm");
    remove("Factorial_ejecutable.casm");
    remove("Calculadora_ejecutable.casm");
    remove("Cmatrices_ejecutable.casm");
    system("pause");
    return 0;
}

int main(){
    try{
        menu();
    } catch(const char *msg){

    }
   return 0;
}