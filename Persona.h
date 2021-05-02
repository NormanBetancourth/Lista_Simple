//
// Created by norma on 1/5/2021.
//

#ifndef LISTASIMPLE_PERSONA_H
#define LISTASIMPLE_PERSONA_H
#include <iostream>
#include <sstream>
#include "Tarea.h"
#include <fstream>

using namespace std;

class Persona {
private:
    Tarea* tarea;
    string nombre;
    string id;
    int edad;
public:
    explicit Persona(string nom="Indef", string id="indef", int edad=0, Tarea* tarea= nullptr );

    const string &getNombre() const;
    const string &getId() const;
    int getEdad() const;
    Tarea* getTarea();

    void setNombre(const string &nombre);
    void setId(const string &id);
    void setEdad(int edad);
    void setTarea(Tarea*);

    string toString();

    void guardar(ofstream& c);
    static Persona* leer(ifstream&);
};


#endif //LISTASIMPLE_PERSONA_H
