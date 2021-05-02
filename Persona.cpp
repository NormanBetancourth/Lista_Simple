//
// Created by norma on 1/5/2021.
//

#include "Persona.h"

Persona::Persona(string nom, string id, int edad,Tarea* tarea ) {
    nombre=nom;
    this->id=id;
    this->edad=edad;
    this->tarea=tarea;
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
    s<<"\nPersona";
    s<<"\t\nNombre: "<<getNombre();
    s<<"\t\nID: "<<getId();
    s<<"\t\nEdad: "<<getEdad();
    if (tarea){
        s<<"\nTareas: "<<getTarea()->toString();
    }

    return s.str();
}

Tarea *Persona::getTarea() {
    return tarea;
}

void Persona::setTarea(Tarea *x) {
    tarea=x;
}

void Persona::guardar(ofstream& c) {
    c << getNombre() << endl
      << getId() << endl
      << getEdad() << endl;
    tarea->guardar();
}

Persona * Persona::leer(ifstream& estFile) {
    string nom, Id, edad;

    if (!(estFile>>nom)) { return nullptr; }
    if (!(estFile>>Id)) { return nullptr; }
    if (!(estFile>>edad)) { return nullptr; }

    return new Persona(nom,Id,stoi(edad),Tarea::leer(Id));

}
