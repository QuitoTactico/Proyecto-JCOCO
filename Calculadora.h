//by Lau :D and Quito c:

#ifndef C___CALCULADORA_H
#define C___CALCULADORA_H

class Calculadora{
    private:
        int numero1;
        int numero2;
    public:
        int generarArchivo();
        int ejecutarArchivo();
        int imprimirArchivo();

        Calculadora(int _numero1, int _numero2);
};

#endif //C___CALCULADORA_H