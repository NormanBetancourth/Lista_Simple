//
// Created by norma on 17/4/2021.
//

#ifndef LISTASIMPLE_PERSONA_H
#define LISTASIMPLE_PERSONA_H
#include <iostream>
#include <sstream>
using namespace std;

class Persona {
private:
    int id;
    string nombre;
public:
    Persona(int id=0, string nombre="indef");

    int getid();
    string getnombre();

    void setid(int);
    void setnombre(string);

    virtual ~Persona();
    string tostring();
};


#endif //LISTASIMPLE_PERSONA_H
