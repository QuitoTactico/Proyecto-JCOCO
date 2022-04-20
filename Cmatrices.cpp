#include "Cmatrices.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int Cmatrices::generarArchivo(int zzz){
    cout<<zzz;

    if(zzz==2){ifstream plantilla("Cmatrices_2plantilla.txt", ios::in);
    ofstream ejecutable("Cmatrices_ejecutable.casm", ios::out);
    
    bool hecho = false;

    while (!plantilla.eof()) {   //eof = end of file
        string linea;
        getline(plantilla, linea);
        ejecutable << linea << endl;

        if(hecho == false){  
            if(zzz==2){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h <<", 1, 2, 3, 4"  << endl;}
            if(zzz==3){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h <<i<<","<<j<<","<<k<<","<<l<<","<<m<<","<<n<<","<<o<<","<<p<<","<<q<<","<<r<<", 1, 2, 3, 4"  << endl;}
            if(zzz==4){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h <<i<<","<<j<<","<<k<<","<<l<<","<<m<<","<<n<<","<<o<<","<<p<<","<<q<<","<<r<<s<<","<<t<<","<<u<<","<<v<<","<<w<<","<<x<<","<<y<<","<<z<<","<<aa<<","<<ab<<","<<ac<<","<<ad<<","<<ae<<","<<af<<", 1, 2, 3, 4"  << endl;}
            hecho = true; 
        }
    }
    plantilla.close();
    ejecutable.close();
    return 0;
    }
    if(zzz==3){ ifstream plantilla("Cmatrices_3plantilla.txt", ios::in);
    ofstream ejecutable("Cmatrices_ejecutable.casm", ios::out);
    
    bool hecho = false;

    while (!plantilla.eof()) {   //eof = end of file
        string linea;
        getline(plantilla, linea);
        ejecutable << linea << endl;

        if(hecho == false){  
            if(zzz==2){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h <<", 1, 2, 3, 4"  << endl;}
            if(zzz==3){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h<<"," <<i<<","<<j<<","<<k<<","<<l<<","<<m<<","<<n<<","<<o<<","<<p<<","<<q<<","<<r<<", 1, 2, 3, 4"  << endl;}
            if(zzz==4){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h <<i<<","<<j<<","<<k<<","<<l<<","<<m<<","<<n<<","<<o<<","<<p<<","<<q<<","<<r<<s<<","<<t<<","<<u<<","<<v<<","<<w<<","<<x<<","<<y<<","<<z<<","<<aa<<","<<ab<<","<<ac<<","<<ad<<","<<ae<<","<<af<<", 1, 2, 3, 4"  << endl;}
            hecho = true; 
        }
    }
    plantilla.close();
    ejecutable.close();
    return 0;
    }
    if(zzz==4){ ifstream plantilla("Cmatrices_4plantilla.txt", ios::in);
    ofstream ejecutable("Cmatrices_ejecutable.casm", ios::out);
    
    bool hecho = false;

    while (!plantilla.eof()) {   //eof = end of file
        string linea;
        getline(plantilla, linea);
        ejecutable << linea << endl;

        if(hecho == false){  
            if(zzz==2){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h <<", 1, 2, 3, 4"  << endl;}
            if(zzz==3){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h<<" , "<<i<<","<<j<<","<<k<<","<<l<<","<<m<<","<<n<<","<<o<<","<<p<<","<<q<<","<<r<<", 1, 2, 3, 4"  << endl;}
            if(zzz==4){ejecutable << "Constants: None, " << a<<","<<b<<","<<c<<","<<d<<","<<e<<","<<f<<","<<g<<","<<h<<" , "<<i<<","<<j<<","<<k<<","<<l<<","<<m<<","<<n<<","<<o<<","<<p<<","<<q<<","<<r<<","<<s<<","<<t<<","<<u<<","<<v<<","<<w<<","<<x<<","<<y<<","<<z<<","<<aa<<","<<ab<<","<<ac<<","<<ad<<","<<ae<<","<<af<<", 1, 2, 3, 4"  << endl;}
            hecho = true; 
        }
    }
    plantilla.close();
    ejecutable.close();
    return 0;
    }
    return 0;
}

int Cmatrices::ejecutarArchivo(){
    system("java -jar JCoCo.jar Cmatrices_ejecutable.casm");
    return 0;
}

int Cmatrices::imprimirArchivo(){
    ifstream imprimir("Cmatrices_ejecutable.casm", ios::in);

    cout << imprimir.rdbuf();
    imprimir.close();
    return 0;
}

Cmatrices::Cmatrices(int _dimension,int _a,int _b,int _c,int _d,int _e,int _f,int _g,int _h,int _i,int _j,int _k,int _l,int _m,int _n,int _o,int _p, int _q,int _r, int _s, int _t,int _u , int _v, int _w , int _x , int _y , int _z, int _aa, int _ab, int _ac, int _ad, int _ae, int _af){
    dimension = _dimension;
    a=_a;
    b=_b;
    c=_c;
    d=_d;
    e=_e;
    f=_f;
    g=_g;
    h=_h;
    i=_i;
    j=_j;
    k=_k;
    l=_l;
    m=_m;
    n=_n;
    o=_o;
    p=_p;
    q=_q;
    r=_r;
    s=_s;
    t=_t;
    u=_u;
    v=_v;
    w=_w;
    x=_x;
    y=_y;
    z=_z;
    aa=_aa;
    ab=_ab;
    ac=_ac;
    ad=_ad;
    ae=_ae;
    af=_af;
}
