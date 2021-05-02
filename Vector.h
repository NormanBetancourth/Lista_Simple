//
// Created by rebec on 30/4/2021.
//

#ifndef VECTORTEMPLATE_VECTOR_H
#define VECTORTEMPLATE_VECTOR_H
#include<iostream>
#include<sstream>
using namespace std;

template<class T>
class Vector {
private:
    T** vector;
    int can;
    int tam;
public:
    Vector(int);
    virtual ~Vector();

    int getCantidad();
    void setCantidad(int);
    int getTamano();
    string toString();
    void vaciarVector();
    void corrimientoVector(int);
    void eliminar(string);
    bool ingresar(T*);
    bool extiste(string);
    T* buscar(string);
};


#endif //VECTORTEMPLATE_VECTOR_H
