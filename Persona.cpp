//
// Created by norma on 17/4/2021.
//

#include "Persona.h"

Persona::Persona(int id, string nombre) {
    this->id=id;
    this->nombre=nombre;

}

int Persona::getid() {
    return id;
}

string Persona::getnombre() {
    return nombre;
}

void Persona::setid(int c) {
    id=c;
}

void Persona::setnombre(string c) {
    nombre=c;
}

string Persona::tostring() {
    stringstream s;
    s<<"Nombre: "<<getnombre()<<endl;
   s <<"Id: "<<getid()<<endl;
   return s.str();
}

Persona::~Persona() {}
