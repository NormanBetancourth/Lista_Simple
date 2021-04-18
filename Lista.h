//
// Created by norma on 17/4/2021.
//

#ifndef LISTASIMPLE_LISTA_H
#define LISTASIMPLE_LISTA_H
#include <sstream>
#include <string>
#include "Nodo.h"

class Lista {
private:
    Nodo* raiz;
    Nodo* aux;
public:
    Lista();
    ~Lista();
    void agregarIni(Persona*);
    void agregarFinal(Persona*);
    string toString();
    bool estaVacia();
    bool eliminarEspecifico(string);
    void ordenarLista();
    bool eliminarIni();
    bool eliminaFinal();
    int cuentaNodos();
    bool busqueda(string);
    Persona* acceso(string);
};

#endif //LISTASIMPLE_LISTA_H
