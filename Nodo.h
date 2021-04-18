//
// Created by norma on 17/4/2021.
//

#ifndef LISTASIMPLE_NODO_H
#define LISTASIMPLE_NODO_H
#include "Persona.h"
#include <sstream>

class Nodo {
private:
    Persona *p;
    Nodo* sig;
public:
    Nodo(Persona *, Nodo*);

    void setPersona(Persona*);
    Persona* getPersona();
    void setSig(Nodo*);
    Nodo* getSig();
    string toString();



};


#endif //LISTASIMPLE_NODO_H
