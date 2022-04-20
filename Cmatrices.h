//this is (not) easy. By Quito, no more "c:"

#ifndef C___CMATRICES_H
#define C___CMATRICES_H

class Cmatrices{
    private:

    public:
          //      numero1   2             3               4
          //      datos     4             9               16
        int dimension,a,b,c,d , e,f,g,h , i,j,k,l , m,n,o,p,  q,r,s,t, u,v,w,x, y,z,aa,ab, ac,ad,ae,af;
        //Cmatrices m1,m2;
        int generarArchivo(int zzz);
        int ejecutarArchivo();
        int imprimirArchivo();

        Cmatrices(int _dimension,int _a = 1,int _b = 0,int _c = 0,int _d = 0,int _e = 0,int _f = 0,int _g = 0,int _h = 0,int _i = 0,int _j = 0,int _k = 0,int _l = 0,int _m = 0,int _n = 0,int _o = 0,int _p = 0, int _q=0,int r=0, int s=0, int t=0,int u =0, int v=0, int w =0, int x =0, int y =0, int z=0, int aa=0, int ab=0, int ac=0, int ad=0, int ae=0, int af=0);
        //Cmatrices(Cmatrices * _m1, Cmatrices * _m2);
};

#endif //C___CMATRICES_H