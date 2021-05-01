//
// Created by norma on 1/5/2021.
//

#ifndef LISTASIMPLE_PERSONA_H
#define LISTASIMPLE_PERSONA_H
#include <iostream>
#include <sstream>

using namespace std;

class Persona {

private:
    string nombre;
    string id;
    int edad;
public:
    explicit Persona(string nom="Indef", string id="indef", int edad=0 );

    const string &getNombre() const;
    const string &getId() const;
    int getEdad() const;

    void setNombre(const string &nombre);
    void setId(const string &id);
    void setEdad(int edad);

    string toString();
};


#endif //LISTASIMPLE_PERSONA_H
