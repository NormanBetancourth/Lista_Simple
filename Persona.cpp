//
// Created by norma on 1/5/2021.
//

#include "Persona.h"

Persona::Persona(string nom, string id, int edad) {
    nombre=nom;
    this->id=id;
    this->edad=edad;
}

const string &Persona::getNombre() const {
    return nombre;
}

const string &Persona::getId() const {
    return id;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

void Persona::setId(const string &id) {
    Persona::id = id;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}

string Persona::toString() {
    stringstream  s;
    s<<"\t\nPersona";
    s<<"\t\nNombre: "<<getNombre();
    s<<"\t\nID: "<<getId();
    s<<"\t\nEdad: "<<getEdad();

    return s.str();
}
