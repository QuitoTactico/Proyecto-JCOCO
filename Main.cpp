// Hola profe, Laura lo saluda :D
// Y tmb Esteban, jajjsja
// Santiago igual
#include <stdio.h>
#include <iostream>         // [ Máximos valores permitidos: ]
#include "Pascal.cpp"       //               34
#include "Factorial.cpp"    //               12
#include "Calculadora.cpp"  //        n [+,-,*,/] m < 
#include "Cmatrices.cpp"
using namespace std;
/*
cosas por hacer:    excepciones, pasar algunas cosas a: char ejemploString[100];   \n   cin >> ejemploString;
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
int menuCmatricesInputs(int dimension);
int eliminarEjecutables();
bool menuImprimir();
int revisarOS();

int menu(){
        
    int opcion;

    do{
        cout<<"\n";
        cout<<".==============================.\n";
        cout<<"| 1. Triangulo de Pascal       |\n";
        cout<<"| 2. Factorial de un numero    |\n";
        cout<<"| 3. Calculadora de Numeros    |\n";
        cout<<"| 4. Calculadora de Matrices   |\n";
        cout<<"| 5. Eliminar ejecutables      |\n";
        cout<<"| 6. Revisar sistema operativo |\n";
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
                eliminarEjecutables();
                break;
            case 6:
                revisarOS();
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
        }else if(imprimir == 'N' or imprimir == 'n' or imprimir == '0' or imprimir == '2' or imprimir == ' '){
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
    cout<<"[4.CMATRICES] \n";
    //help
    cout<<"De que dimension desea sus matrices cuadradas?\n";
    cout<<"|  > 2 / 3 / 4 : ";
    cin>>numero1;  //viene siendo la dimensión

    menuCmatricesInputs(numero1);
    //menuMatricesInputs();
    /*
    cout<<"Ok. ("<<numero1<<")\nIngrese "<<(numero1*numero1)<<" numeros para la PRIMERA matriz c:\n";
    Cmatrices m1 = menuCmatricesInputs();

    cout<<"\nGenial!, Ahora ingrese los otros "<<(numero1*numero1)<<" numeros para la SEGUNDA matriz:\n";
    Cmatrices m2 = menuCmatricesInputs();

    cout<<"\nA procesar. . .";*/

return 0;
}

int menuCmatricesInputs(int dimension){
    //        4         4   9               16     9                                   16
    int a,b,c,d , e,f,g,h , i,j,k,l , m,n,o,p,   q,r,s,t, u,v,w,x, y,z,aa,ab, ac,ad,ae,af;


    cout<<"Ok. ("<<dimension<<")\nIngrese "<<(dimension*dimension)<<" numeros para la PRIMERA matriz c:\n";
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    if(dimension==2){cout<<"\nGenial!, Ahora ingrese los otros 4 numeros para la SEGUNDA matriz:\n";}

    cin>>e;
    cin>>f;
    cin>>g;
    cin>>h;
    if(dimension == 2){Cmatrices m2 = Cmatrices(dimension,a,b,c,d,e,f,g,h);
    m2.generarArchivo(dimension);
    m2.ejecutarArchivo();
    if(menuImprimir()==true){ m2.imprimirArchivo(); }
    return 0;}

    cin>>i;
    if(dimension==3){cout<<"\nGenial!, Ahora ingrese los otros 9 numeros para la SEGUNDA matriz:\n";}
    
    cin>>j;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>o;
    cin>>p;
    if(dimension==4){cout<<"\nGenial!, Ahora ingrese los otros 16 numeros para la SEGUNDA matriz:\n";}
    cin>>q;
    cin>>r;
    if(dimension == 3){Cmatrices m3 = Cmatrices(dimension,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r);
    m3.generarArchivo(dimension);
    m3.ejecutarArchivo();
    if(menuImprimir()==true){ m3.imprimirArchivo(); }
    return 0;}

    cin>>s;
    cin>>t;
    cin>>u;
    cin>>v;
    cin>>w;
    cin>>x;
    cin>>y;
    cin>>z;
    cin>>aa;
    cin>>ab;
    cin>>ac;
    cin>>ad;
    cin>>ae;
    cin>>af;
    if(dimension == 4){Cmatrices m4 = Cmatrices(dimension,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af);
    m4.generarArchivo(dimension);
    m4.ejecutarArchivo();
    if(menuImprimir()==true){ m4.imprimirArchivo(); }
    return 0;}

    menu();

return 0;
}


int eliminarEjecutables(){
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

int revisarOS(){
    #ifdef _WIN32
        cout<<"Windows\n";
    #elif __linux__
        cout<<"Linux\n";
    #elif __unix__
        cout<<"Unix\n";
    #else
        cout<<"Unidentified Operative System\n";
    #endif
return 0;
}

int main(){
    try{
        menu();
    } catch(const char *msg){
        cout<<msg;
    }
   return 0;
}

/*  ------------------------------ [PROYECTO_LENGUAJES] --------------------------------
       _          
       \`*-.
        )  _`-.        by:      > ESTEBAN VERGARA GIRALDO        ඞ
       .  : `. .
       : _   '  \
       ; *` _.   `*-._           > LAURA ZÁRATE GUERRERO
       `-.-'          `-.
         ;       `       `.
         :.       .        \      > SANTIAGO ARIAS HIGUITA
         . \  .   :   .-'   .   
         '  `+.;  ;  '      :   
         :  '  |    ;       ;-.         [MAIN.CPP]
         ; '   : :`-:     _.`* ;
      .*' /  .*' ; .*`- +'  `*'
      `*-*   `*-*  `*-*'

    _                ___       _.--.
    \`.|\..----...-'`   `-._.-'_.-'`             --- REQUERIMIENTOS / ÍNDICE: ----------------
    /  ' `         ,       _.-'               JCOCO.jar          COCO             CMAKELISTS.TXT
    )/' _/     \   `-_,   /                PASCAL.CPP         PASCAL.H         PASCAL_PLANTILLA.TXT
    `-'" `"\_  ,_.-;_.-\_ ',            FACTORIAL.CPP      FACTORIAL.H      FACTORIAL_PLANTILLA.TXT
        _.-'_./   {_.'   ; /         CALCULADORA.CPP    CALCULADORA.H    CALCULADORA_PLANTILLA.TXT       
       {_.-``-'         {_/       CMATRICES.CPP      CMATRICES.H      CMATRICES_PLANTILLA.TXT
       */                              